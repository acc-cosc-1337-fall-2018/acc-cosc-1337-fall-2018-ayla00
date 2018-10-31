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
		if (pegs[position - 1].val == "x")
		{
			x_win = 1;  //assigns and accumulates win to player x
			return true;
		}
		else if (pegs[position - 1].val == "o")
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
		pegs[i].val = " ";
	}
}

string TicTacToe::get_player(string player)
{
	set_next_player(player);
	return next_player;
}


void TicTacToe::clear_wins()
{
	x_win = 0;
	o_win = 0;
	c_win = 0;
}




bool TicTacToe::check_board_full() const
{

	if (checkfull == false)
		return false;
	else
		return true;
}

void TicTacToe::mark_board(int position)
{

	if (next_player == "x")
		pegs[position - 1].val = "x";
	else
		pegs[position - 1].val = "o";
}




