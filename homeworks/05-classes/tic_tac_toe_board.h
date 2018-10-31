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
	TicTacToe() { int place = 0; string player = "x"; }
	TicTacToe(int place, string player) : next_player(player) {}
	bool game_over();
	void start_game(string player);
	void mark_board(int position, string player);
	string get_player(string player) const;
	void display_board();
	string player;
	int position;
	int place;
	//int get_position(int place);
	friend std::istream & operator>> (std::istream& in, TicTacToe& t);
	friend std::ostream & operator>> (std::ostream& in, const TicTacToe& t);


protected:
	//vector<Peg> pegs{ 9," " };
	string next_player;
	void set_next_player(string next_player);
	virtual bool check_column_win() const = 0; 
	virtual bool check_row_win() const = 0;
	virtual bool check_diagonal_win() const  = 0;
	virtual void display_board(std::ostream& out) const = 0; //friends don't inherit, so instead of using friends to display this function is used
	bool check_board_full() const;
	void clear_board();
	void clear_wins();
	vector<Peg> pegs; //initialize vector in tictactoe3 and 4
	virtual void get_input(std::istream& in) = 0;

	int x_win{ 0 };
	int o_win{ 0 };
	int c_win{ 0 };
};
#endif //TIC_TAC_TOE_H



