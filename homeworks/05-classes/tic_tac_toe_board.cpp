#include "tic_tac_toe_board.h"
#include <string>
#include<vector>
#include<iostream>


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
		if (next_player == "x")
		{
			o_win = 1;  //assigns and accumulates win to player x
			return true;
		}
		else 
		{
			x_win = 1;
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



void TicTacToe::set_next_player()
{
	if (next_player == "x")
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

string TicTacToe::get_player()
{
	return next_player;
}

void TicTacToe::clear_wins()
{
	x_win = 0;
	o_win = 0;
	c_win = 0;
}

bool TicTacToe::check_column_win()
{
	if ((pegs[0] != " ") && (pegs[0] == pegs[3]) && (pegs[3] == pegs[6]))
		return true;
	else if ((pegs[1] != " ") && (pegs[1] == pegs[4]) && (pegs[4] == pegs[7]))
		return true;
	else if ((pegs[2] != " ") && (pegs[2] == pegs[5]) && (pegs[5] == pegs[8]))
		return true;
	else
		return false;
}


bool TicTacToe::check_diagonal_win()
{

	if ((pegs[0] != " ") && (pegs[0] == pegs[4]) && (pegs[4] == pegs[8]))
		return true;
	else if ((pegs[2] != " ") && (pegs[2] == pegs[4]) && (pegs[4] == pegs[6]))
		return true;
	else
		return false;

}

bool TicTacToe::check_row_win()
{
	if ((pegs[0] != " ") && (pegs[0] == pegs[1]) && (pegs[1] == pegs[2]))
		return true;
	else if ((pegs[3] != " ") && (pegs[3] == pegs[4]) && (pegs[4] == pegs[5]))
		return true;
	else if ((pegs[6] != " ") && (pegs[6] == pegs[7]) && (pegs[7] == pegs[8]))
		return true;
	else
		return false;
}

bool TicTacToe::check_board_full()
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

void TicTacToe::mark_board(int position)
{

	pegs[position - 1] = next_player;

	set_next_player();
}


std::istream & operator>> (std::istream& in, TicTacToe& t)
{
	int position;
	in >> position;
	t.mark_board(position);
	return in;
}

std::ostream & operator<<(std::ostream& out, const TicTacToe& t)
{
	out << "* * * * tic tac toe * * * * " << endl;
	out << "[1][2][3]" << "   " << '[' << t.pegs[0] << ']' << '[' << t.pegs[1] << ']' << '[' << t.pegs[2] << ']' << endl;
	out << "[4][5][6]" << "   " << '[' << t.pegs[3] << ']' << '[' << t.pegs[4] << ']' << '[' << t.pegs[5] << ']' << endl;
	out << "[7][8][9]" << "   " << '[' << t.pegs[6] << ']' << '[' << t.pegs[7] << ']' << '[' << t.pegs[8] << ']' << endl;
	out << " *  * *  *  * *  * *  * *  *" << endl << endl;

	out << "who is winning this game?" << endl;
	//this displays the winner for the current vector only
	//will display total wins only for accumulator object named result in main
	out << "x wins: " << t.x_win << "    o wins: " << t.o_win << "    c wins: " << t.c_win << endl;

	return out;
}
TicTacToe TicTacToe::operator+=(const TicTacToe& result)
{
	x_win += result.x_win;
	o_win += result.o_win;
	c_win += result.c_win;

	return TicTacToe(x_win, o_win, c_win);
}


