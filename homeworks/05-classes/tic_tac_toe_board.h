#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include <string>
#include <vector>
#include <iostream>
#include "peg.h"

using std::string; using std::vector;  using std::cin;

class TicTacToe
{
public:
	bool game_over();
	void start_game(string player);
	void mark_board(int position);
	string get_player(string player);
	virtual void display_board(std::ostream& out) const = 0;
	string player;
	int position;

protected:
	string next_player;
	void set_next_player(string player);
	virtual bool check_column_win() const = 0;
	virtual bool check_row_win() const = 0;
	virtual bool check_diagonal_win() const = 0;
	bool check_board_full() const;
	void clear_board();
	void clear_wins();
	vector<Peg> pegs; //initialize vector in tictactoe3 and 4
	virtual void get_input(std::istream& in) = 0;
	bool checkfull;

	int x_win{ 0 };
	int o_win{ 0 };
	int c_win{ 0 };
};
#endif //TIC_TAC_TOE_H



