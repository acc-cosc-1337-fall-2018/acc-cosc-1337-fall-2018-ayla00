#include "tic_tac_toe_3.h"

///define display_board on TicTacToe3 and 4
// void TicTacToe3::display_board(std::ostream& out) const

// for(unsigned i = 0; i < pegs.size(); i += 3)
//{
//out << pegs[i].val << " " << pegs[i +1}.val << " " << pegs[i+ 2].val << std::endl;
//}
//out o_win, c

TicTacToe3::TicTacToe3()
{
	for (int i = 0; i < 9; i++)
	{
		Peg peg;
		pegs.push_back(peg);
	}
}


bool TicTacToe3::check_column_win() const
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


bool TicTacToe3::check_diagonal_win() const
{

	if ((pegs[0] != " ") && (pegs[0] == pegs[4]) && (pegs[4] == pegs[8]))
		return true;
	else if ((pegs[2] != " ") && (pegs[2] == pegs[4]) && (pegs[4] == pegs[6]))
		return true;
	else
		return false;

}

bool TicTacToe3::check_row_win() const
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

std::istream & operator>> (std::istream& in, TicTacToe3& t)
{
	t.get_input(in);
	//in >> t.player;
	//in >> t.place;
	return in;
}

get input
{
	int position
	std::cout << "enter position";
	in >> position;
	mark_board(position);
}