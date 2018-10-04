
#ifndef TIC_TAC_TOE_BOARD_H
#define TIC_TAC_TOE_BOARD_H

#include <string>
#include <vector>
#include <iostream>

using std::string; using std::vector;

class TicTacToe
{
public:
	TicTacToe(int place, string player) : position(place), next_player(player) {};
	bool game_over();
	void start_game(string player);
	void mark_board(int position, string player);
	string get_player(string player);
	void display_board();
	int position;

private:
	vector<string> pegs{ 9," " };
	string next_player;
	void set_next_player(string next_player);
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	bool check_board_full();
	void clear_board();
};
#endif //TIC_TAC_TOE_BOARD_H