#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

#include <iostream>
#include <vector>
#include <memory>
#include <string>
#include "tic_tac_toe_board.h"
//#include "tic_tac_toe_data.h"


enum GameType { three = 0, four = 1 };

class TManager
{
public:
	GameType type;
	std::unique_ptr<TicTacToe> get_game(GameType type);
	void save_game(std::unique_ptr<TicTacToe> tptr);
	friend std::ostream& operator<<(std::ostream& out, TManager& t);
	std::string value;
	int choose_game();
	const std::vector<std::unique_ptr<TicTacToe>>& get_games();
	void get_winner_totals(int& x, int& o, int& c);

private:
	void update_winner_count(string& value);
	std::vector<std::unique_ptr<TicTacToe>> boards;
	int x_win{ 0 };
	int o_win{ 0 };
	int c_win{ 0 };
	TicTacToeData tic_tac_toe_data;

};
#endif // TIC_TAC_TOE_MANAGER_H

