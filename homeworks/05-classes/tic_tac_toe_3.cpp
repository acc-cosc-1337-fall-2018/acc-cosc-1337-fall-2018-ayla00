#include "tic_tac_toe_3.h"
//#include "peg.h"
//#include "tic_tac_toe_board.h"
//#include "tic_tac_toe_manager.h"
#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::vector;

TicTacToe3::TicTacToe3()
{
	for (int i = 0; i <= 8; i++)
	{
		Peg peg;
		pegs.push_back(peg);
	}
}

TicTacToe3::TicTacToe3(vector<Peg> p)
{
	pegs = p; //do I have to include a loop like the constructor above?
}             // i don't think so, p should be a vector so no need for loop  


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


void TicTacToe3::display_board(std::ostream& out) const
{
	out << "[1][2][3]" << "     " << '[' << pegs[0].val << ']' << '[' << pegs[1].val << ']' << '[' << pegs[2].val << ']' << std::endl;
	out << "[4][5][6]" << "     " << '[' << pegs[3].val << ']' << '[' << pegs[4].val << ']' << '[' << pegs[5].val << ']' << std::endl;
	out << "[7][8][9]" << "     " << '[' << pegs[6].val << ']' << '[' << pegs[7].val << ']' << '[' << pegs[8].val << ']' << std::endl;
}


void TicTacToe3::get_input(std::istream& in)
{

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