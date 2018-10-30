#ifndef TIC_TAC_TOE_3_H
#define TIC_TAC_TOE_3_H

#include <string>
#include <vector>
#include <iostream>

using std::string; using std::vector;  using std::cin;

class TicTacToe
{
public:
	TicTacToe3() { int place = 0; string player = "x"; }
	TicTacToe3(int place, string player) : next_player(player) {}
	TicTacToe3 operator+=(TicTacToe3&);
	friend std::istream & operator>> (std::istream& in, TicTacToe3& t);
	friend std::ostream & operator<< (std::ostream& in, TicTacToe3& t);


protected:

	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	bool check_board_full();

};
#endif //TIC_TAC_TOE_3_H


