#ifndef TIC_TAC_TOE_4_H
#define TIC_TAC_TOE_4_H

#include <string>
#include <vector>
#include <iostream>

using std::string; using std::vector;  using std::cin;

class TicTacToe
{
public:
	TicTacToe4() { int place = 0; string player = "x"; }
	TicTacToe4(int place, string player) : next_player(player) {}
	TicTacToe4 operator+=(TicTacToe4&);
	friend std::istream & operator>> (std::istream& in, TicTacToe4& t);
	friend std::ostream & operator<< (std::ostream& in, TicTacToe4& t);


protected:

	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	bool check_board_full();

};
#endif //TIC_TAC_TOE_4_H

