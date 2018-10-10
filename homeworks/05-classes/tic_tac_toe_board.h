#ifndef TIC_TAC_TOE_BOARD_H
#define TIC_TAC_TOE_BOARD_H

#include <string>
#include <vector>
#include <iostream>

using std::string; using std::vector;  using std::cin;

class TicTacToe
{
public:
	TicTacToe() = default;
	TicTacToe(int x, int o, int c) : x_win(x), o_win(o), c_win(c) {}
	TicTacToe(int place, string player) : position(place), next_player(player) {};
	bool game_over();
	void start_game(string player);
	void mark_board(int position, string player);
	string get_player(string player);
	string player;
	int position;
	int place;
	int get_position(int place);
	void clear_wins();
	TicTacToe operator+=(const TicTacToe& result);

	friend std::istream & operator>> (std::istream& in, TicTacToe& t);
	friend std::ostream & operator<<(std::ostream& out, const TicTacToe& t);



private:
	vector<string> pegs{ 9," " };
	string next_player;
	void set_next_player(string next_player);
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	bool check_board_full();
	void clear_board();

	int x_win{ 0 };
	int o_win{ 0 };
	int c_win{ 0 };
};
#endif //TIC_TAC_TOE_BOARD_H

