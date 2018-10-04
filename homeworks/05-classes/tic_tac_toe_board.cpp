#include "tic_tac_toe_board.h"
#include <string>
#include<vector>
#include<iostream>


using std::vector;
using std::string;
using std::cout;
using std::endl;

bool TicTacToe::game_over()
{
	bool column = check_column_win();
	bool row = check_row_win();
	bool diagonal = check_diagonal_win();
	bool full = check_board_full();


	if ((column == true) || (row == true) || (diagonal == true) || (full == true))
		return true;
	else
		return false;

}



void TicTacToe::start_game(string player)
{
	next_player = player;
	clear_board();
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

string TicTacToe::get_player(string player)
{
	set_next_player(player);
	return next_player;
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

void TicTacToe::mark_board(int position, string player)
{

	if (player == "x")
		pegs[position] = "x";
	else
		pegs[position] = "o";
}

void TicTacToe::display_board()
{
	cout << '[' << pegs[0] << ']' << '[' << pegs[1] << ']' << '[' << pegs[2] << ']' << endl;
	cout << '[' << pegs[3] << ']' << '[' << pegs[4] << ']' << '[' << pegs[5] << ']' << endl;
	cout << '[' << pegs[6] << ']' << '[' << pegs[7] << ']' << '[' << pegs[8] << ']' << endl;
}
