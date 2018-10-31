#ifndef TIC_TAC_TOE_4_H
#define TIC_TAC_TOE_4_H

#include "tic_tac_toe_board.h"
#include <string>
#include <vector>
#include <iostream>

using std::string; using std::vector;  using std::cin;

class TicTacToe4 : public TicTacToe
{
public:
	TicTacToe4();
	//TicTacToe4(int place, string player) : next_player(player) {}
	//TicTacToe4 operator+=(TicTacToe4&);
	void display_board(std::ostream& out) const override;
	friend std::istream & operator>> (std::istream& in, TicTacToe4& t);
	friend std::ostream & operator<< (std::ostream& in, TicTacToe4& t);


protected:

	bool check_column_win() const;
	bool check_row_win() const;
	bool check_diagonal_win() const;
	bool check();
	void get_input(std::istream& in);

};
#endif //TIC_TAC_TOE_4_H

