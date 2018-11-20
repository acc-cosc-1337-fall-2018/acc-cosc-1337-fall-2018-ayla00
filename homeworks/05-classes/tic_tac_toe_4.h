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
	TicTacToe4(vector<Peg> p);
	void display_board(std::ostream& out) const override;
	void get_input(std::istream& in);

protected:

	bool check_column_win() const;
	bool check_row_win() const;
	bool check_diagonal_win() const;
	bool check_board_full() const;


};
#endif //TIC_TAC_TOE_4_H

