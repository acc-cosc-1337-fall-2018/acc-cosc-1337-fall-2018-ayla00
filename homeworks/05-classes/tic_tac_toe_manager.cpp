#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_board.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "peg.h"
#include <iostream>
#include <memory>

std::unique_ptr<TicTacToe> TManager::get_game(GameType& type)
{
	std::unique_ptr<GameType> typeptr;

	if (type == three)
		typeptr = std::make_unique<TicTacToe3>();
	else if (type == four)
		typeptr = std::make_unique<TicTacToe4>();
	return typeptr;
}

void TManager::get_win(string& value)
{
	value = value;
}


void TManager::update_winner_count(string& value)
{
	if (value == "x")
		x_win += 1;
	else if (value == "o")
		o_win += 1;
	else
		c_win += 1;
}

std::ostream & operator<<(std::ostream& out, TManager& tm )
{
	
	auto s = tm.boards.size();

	for (int j = 0; j < s; j++)
	{
		out << tm.boards.
	}



}
