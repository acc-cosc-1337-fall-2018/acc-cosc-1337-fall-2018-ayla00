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
	string player;
	bool game_over();
	void start_game();
	void mark_board(int position);
	string get_player();
	virtual void display_board(std::ostream& out) const = 0;
	virtual void play_game() = 0;
	int position;


protected:
	string next_player;
	void set_next_player();
	virtual bool check_column_win() const = 0;
	virtual bool check_row_win() const = 0;
	virtual bool check_diagonal_win() const = 0;
	virtual bool check_board_full() const = 0;
	void clear_board();
	vector<Peg> pegs; //initialize vector in tictactoe3 and 4
	virtual void get_input(std::istream& in) = 0;

};
#endif //TIC_TAC_TOE_H



