#include "tic_tac_toe_board.h"
#include "peg.h"
#include <string>
#include<vector>
#include<iostream>

using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::cin;

bool TicTacToe::game_over()
{
	bool column = check_column_win();
	bool row = check_row_win();
	bool diagonal = check_diagonal_win();
	bool full = check_board_full();

	if ((column == true) || (row == true) || (diagonal == true))
	{
		if (pegs[position] == "x")
		{
			x_win = 1;  //assigns and accumulates win to player x
			return true;
		}
		else if (pegs[position] == "o")
		{
			o_win = 1;
			return true;
		}
	}
	else if (full == true)
	{
		c_win = 1;
		return true;
	}
	else
		return false;


}



void TicTacToe::start_game(string player)
{
	next_player = player;
	clear_board();
	clear_wins(); //resets x_win, o_win, and c_win to zero so old values are not included in total win count
				  // by the operator+= function
}



void TicTacToe::set_next_player(string player)
{
	if (player == "x")
		next_player = "o";
	else
		next_player = "x";

}

void TicTacToe::clear_board()
{
	for (int i = 0; i <= 8; i++)
	{
		pegs[i] = " ";
	}
}

string TicTacToe::get_player(string player) const
{
	set_next_player(player);
	return next_player;
}


int TicTacToe::get_position(int place)
{
	position = place - 1;  //assigns value to variable position after intake of place
	return position;
}

void TicTacToe::clear_wins()
{
	x_win = 0;
	o_win = 0;
	c_win = 0;
}




bool TicTacToe::check_board_full() const
{
	bool option = true;
	for (int i = 0; i <= 8; i++)
	{
		if (pegs[i] == " ")
			option = false;
		else
			option = option;

	}
	return option;
}

void TicTacToe::mark_board(int position, string player)
{

	if (player == "x")
		pegs[position] = "x";
	else
		pegs[position] = "o";
}


std::istream & operator>> (std::istream& in, TicTacToe& t)
{
	t.get_input(in);
	//in >> t.player;
	//in >> t.place;
	return in;
}

std::ostream & operator<<(std::ostream& out, const TicTacToe& t)
{
	t.display_board(out);

	return out;
}

///define display_board on TicTacToe3 and 4
// void TicTacToe3::display_board(std::ostream& out) const


