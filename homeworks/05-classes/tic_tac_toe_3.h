#ifndef TIC_TAC_TOE_3_H
#define TIC_TAC_TOE_3_H

#include "tic_tac_toe_board.h"
#include <string>
#include <vector>
#include <iostream>


using std::string; using std::vector;  using std::cin;

class TicTacToe3 : public TicTacToe
{
public:
	TicTacToe3();
	//TicTacToe3(int place, string player) : next_player(player) {}
	void display_board(std::ostream& out) const override;
	friend std::istream & operator>> (std::istream& in, TicTacToe3& t);
	friend std::ostream & operator<< (std::ostream& out, TicTacToe3& t);

protected:
	bool check_column_win() const;
	bool check_row_win() const;
	bool check_diagonal_win() const;
	void get_input(std::istream& in);
	bool check();


};
#endif //TIC_TAC_TOE_3_H

