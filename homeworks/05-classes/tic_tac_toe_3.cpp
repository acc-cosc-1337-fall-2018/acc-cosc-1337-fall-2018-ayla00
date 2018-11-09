#include "tic_tac_toe_3.h"
#include "peg.h"
#include "tic_tac_toe_board.h"
#include "tic_tac_toe_manager.h"
#include <iostream>
#include <string>
#include <vector>

//using std::string;
using std::cout;
using std::cin;
//using std::vector;

TicTacToe3::TicTacToe3()
{
	for (int i = 0; i <= 8; i++)
	{
		Peg peg;
		pegs.push_back(peg);
	}
}


bool TicTacToe3::check_column_win() const
{
	if ((pegs[0].val != " ") && (pegs[0].val == pegs[3].val) && (pegs[3].val == pegs[6].val))
		return true;
	else if ((pegs[1].val != " ") && (pegs[1].val == pegs[4].val) && (pegs[4].val == pegs[7].val))
		return true;
	else if ((pegs[2].val != " ") && (pegs[2].val == pegs[5].val) && (pegs[5].val == pegs[8].val))
		return true;
	else
		return false;
}


bool TicTacToe3::check_diagonal_win() const
{

	if ((pegs[0].val != " ") && (pegs[0].val == pegs[4].val) && (pegs[4].val == pegs[8].val))
		return true;
	else if ((pegs[2].val != " ") && (pegs[2].val == pegs[4].val) && (pegs[4].val == pegs[6].val))
		return true;
	else
		return false;

}



bool TicTacToe3::check_row_win() const
{
	if ((pegs[0].val != " ") && (pegs[0].val == pegs[1].val) && (pegs[1].val == pegs[2].val))
		return true;
	else if ((pegs[3].val != " ") && (pegs[3].val == pegs[4].val) && (pegs[4].val == pegs[5].val))
		return true;
	else if ((pegs[6].val != " ") && (pegs[6].val == pegs[7].val) && (pegs[7].val == pegs[8].val))
		return true;
	else
		return false;
}


std::istream & operator>> (std::istream& in, TicTacToe3& t)
{
	t.get_input(in);
	cout << "player: " << t.next_player << std::endl;
	return in;
}


void TicTacToe3::display_board(std::ostream& out) const
{
	out << "[1][2][3]" << "     " << '[' << pegs[0].val << ']' << '[' << pegs[1].val << ']' << '[' << pegs[2].val << ']' << std::endl;
	out << "[4][5][6]" << "     " << '[' << pegs[3].val << ']' << '[' << pegs[4].val << ']' << '[' << pegs[5].val << ']' << std::endl;
	out << "[7][8][9]" << "     " << '[' << pegs[6].val << ']' << '[' << pegs[7].val << ']' << '[' << pegs[8].val << ']' << std::endl;
}



std::ostream & operator<<(std::ostream& out, TicTacToe3& t)
{
	t.display_board(out);
	return out;
}

void TicTacToe3::get_input(std::istream & in)
{
	TicTacToe3 t;
	//cout << "player: " << t.next_player << std::endl; this is not the same as tictactoe.player, is a dif. instance and wouldn't be defined
	in >> position;
	mark_board(position);

}

bool TicTacToe3::check_board_full() const
{
	bool option = true;
	for (int i = 0; i <= 8; i++)
	{
		if (pegs[i].val == " ")
			option = false;
		else
			option = option;

	}
	return option;
}


void TicTacToe3::play_game()
{

	//string player;
	bool over = false;

	TicTacToe3 tictactoe;

	std::cout << "choose your peg (x or o): " << std::endl;
	cin >> tictactoe.player;
	tictactoe.next_player = tictactoe.player;  //next_player acquires value here

	while (over == false)
	{

		cout << "choose which position you want to place your peg" << std::endl;
		cout << "by typing the number and pressing enter" << std::endl;
		cout << tictactoe;
		cin >> tictactoe;
		cout << tictactoe;
		tictactoe.player = tictactoe.get_player();
		over = tictactoe.game_over();

	}


}