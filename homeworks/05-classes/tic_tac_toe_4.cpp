#include "tic_tac_toe_4.h"
#include "peg.h"
#include "tic_tac_toe_board.h"
#include "tic_tac_toe_manager.h"
#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::cout;

TicTacToe4::TicTacToe4()
{
	for (int i = 0; i <= 15; i++)
	{
		Peg peg;
		pegs.push_back(peg);
	}
}


bool TicTacToe4::check_column_win() const
{
	if ((pegs[0].val != " ") && (pegs[0].val == pegs[4].val) && (pegs[4].val == pegs[8].val) && (pegs[8].val == pegs[12].val))
		return true;
	else if ((pegs[1].val != " ") && (pegs[1].val == pegs[5].val) && (pegs[5].val == pegs[9].val) && (pegs[9].val == pegs[13].val))
		return true;
	else if ((pegs[2].val != " ") && (pegs[2].val == pegs[6].val) && (pegs[6].val == pegs[10].val) && (pegs[10].val == pegs[14].val))
		return true;
	else if ((pegs[3].val != " ") && (pegs[3].val == pegs[7].val) && (pegs[7].val == pegs[11].val) && (pegs[11].val == pegs[15].val))
		return true;
	else
		return false;
}



bool TicTacToe4::check_diagonal_win() const
{

	if ((pegs[0].val != " ") && (pegs[0].val == pegs[5].val) && (pegs[5].val == pegs[10].val) && (pegs[10].val == pegs[15].val))
		return true;
	else if ((pegs[3].val != " ") && (pegs[3].val == pegs[6].val) && (pegs[6].val == pegs[9].val) && (pegs[9].val == pegs[12].val))
		return true;
	else
		return false;

}




bool TicTacToe4::check_row_win() const
{
	if ((pegs[0].val != " ") && (pegs[0].val == pegs[1].val) && (pegs[1].val == pegs[2].val) && (pegs[2].val == pegs[3].val))
		return true;
	else if ((pegs[4].val != " ") && (pegs[4].val == pegs[5].val) && (pegs[5].val == pegs[6].val) && (pegs[6].val == pegs[7].val))
		return true;
	else if ((pegs[8].val != " ") && (pegs[8].val == pegs[9].val) && (pegs[9].val == pegs[10].val) && (pegs[10].val == pegs[11].val))
		return true;
	else if ((pegs[12].val != " ") && (pegs[12].val == pegs[13].val) && (pegs[13].val == pegs[14].val) && (pegs[14].val == pegs[15].val))
		return true;
	else
		return false;
}


std::istream & operator>> (std::istream& in, TicTacToe4& t)
{
	t.get_input(in);
	return in;
}


void TicTacToe4::display_board(std::ostream& out) const
{
	out << "[ 1][ 2][ 3][ 4]" << "     " << '[' << pegs[0].val << ']' << '[' << pegs[1].val << ']' << '[' << pegs[2].val << ']' << '[' << pegs[3].val << ']' << std::endl;
	out << "[ 5][ 6][ 7][ 8]" << "     " << '[' << pegs[4].val << ']' << '[' << pegs[5].val << ']' << '[' << pegs[6].val << ']' << '[' << pegs[7].val << ']' << std::endl;
	out << "[ 9][10][11][12]" << "     " << '[' << pegs[8].val << ']' << '[' << pegs[9].val << ']' << '[' << pegs[10].val << ']' << '[' << pegs[11].val << ']' << std::endl;
	out << "[13][14][15][16]" << "     " << '[' << pegs[12].val << ']' << '[' << pegs[13].val << ']' << '[' << pegs[14].val << ']' << '[' << pegs[15].val << ']' << std::endl;
}


std::ostream & operator<<(std::ostream& out, TicTacToe4& t)
{
	t.display_board(out);

	return out;
}

void TicTacToe4::get_input(std::istream & in)
{
	std::cout << "enter position" << std::endl;
	in >> position;
	mark_board(position);
}

bool TicTacToe4::check_board_full() const
{
	bool option = true;
	for (int i = 0; i <= 15; i++)
	{
		if (pegs[i].val == " ")
			option = false;
		else
			option = option;

	}
	return option;
}

void TicTacToe4::play_game()
{

	bool over = false;

	TicTacToe4 tictactoe;

	std::cout << "choose your peg (x or o): " << std::endl;
	cin >> tictactoe.player;
	tictactoe.next_player = tictactoe.player;

	while (over == false)
	{
		tictactoe.player = tictactoe.get_player();
		cout << "choose which position you want to place your peg" << std::endl;
		cout << "by typing the number and pressing enter" << std::endl;
		cout << tictactoe;
		cin >> tictactoe;
		cout << tictactoe;
		tictactoe.player = tictactoe.get_player();
		over = tictactoe.game_over();

	}


}
