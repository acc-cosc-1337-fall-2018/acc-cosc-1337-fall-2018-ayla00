#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

#include <iostream>
#include <vector>
#include <memory>
#include <string>
#include "tic_tac_toe_board.h"


class TManager
{
public:
	enum GameType { three = 0, four = 1 };
	std::unique_ptr<TicTacToe> get_game(int type);
	int type;
	void save_game(std::unique_ptr<TicTacToe> tptr);
	friend std::ostream& operator<<(std::ostream& out, TManager& t);
	void get_win(string& value);
	std::string value;
	//void play();
	int choose_game();


private:
	std::vector<std::unique_ptr<TicTacToe>> boards;
	void update_winner_count(string& value);
	int x_win{ 0 };
	int o_win{ 0 };
	int c_win{ 0 };

};
#endif // TIC_TAC_TOE_MANAGER_H

