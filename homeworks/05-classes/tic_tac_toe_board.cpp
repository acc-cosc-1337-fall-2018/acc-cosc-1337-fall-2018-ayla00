#include "tic_tac_toe_board.h"
//#include "tic_tac_toe_3.h"
#include "peg.h"
#include "tic_tac_toe_manager.h"
#include <string>
#include<vector>
#include<iostream>

using std::vector; using std::string; using std::cout; using std::endl; using std::cin;


bool TicTacToe::game_over()
{
	bool column = check_column_win();
	bool row = check_row_win();
	bool diagonal = check_diagonal_win();
	bool full = check_board_full();


	if ((column == true) || (row == true) || (diagonal == true))
	{
		winner = pegs[position - 1].val;
		get_winner();

		return true;
	}
	else if (full == true)
	{
		winner = "c";
		get_winner();

		return true;
	}
	else
		return false;
}


void TicTacToe::start_game()
{

	clear_board();
	cout << "choose your peg (x or o): " << std::endl;
	cin >> player;
	get_player();

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
		pegs[i].val = " ";
	}
}

string TicTacToe::get_player()
{
	next_player = player;
	return next_player;
}

void TicTacToe::mark_board(int position)
{
	pegs[position - 1].val = next_player;
	set_next_player();
}

std::ostream & operator<<(std::ostream& out, TicTacToe& t)
{
	t.display_board(out);
	return out;
}

string TicTacToe::get_winner()
{

	return winner;
}


std::istream & operator>> (std::istream& in, TicTacToe& t)
{

	t.get_input(in);

	return in;
}

const vector<Peg>& TicTacToe::get_pegs()
{
	return pegs;
}