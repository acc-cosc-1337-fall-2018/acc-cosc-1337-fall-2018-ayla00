#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_board.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "peg.h"
#include <iostream>
#include <memory>

std::unique_ptr<TicTacToe> TManager::get_game(GameType type)
{
	std::unique_ptr<TicTacToe> a;
	if (type == three)
		a = std::make_unique<TicTacToe3>();
	else if (type == four)
		a = std::make_unique<TicTacToe4>();
	return a;
}

void TManager::save_game(std::unique_ptr<TicTacToe> tptr)
{

	auto winner_tic = tptr->get_winner();

	update_winner_count(winner_tic);

	boards.push_back(std::move(tptr));

}


void TManager::update_winner_count(std::string& value)
{

	if (value == "x")
	{
		x_win += 1;
		o_win = o_win;
		c_win = c_win;

	}
	else if (value == "o")
	{
		o_win += 1;
		x_win = x_win;
		c_win = c_win;
	}
	else if (value == "c")
	{
		c_win += 1;
		x_win = x_win;
		o_win = o_win;
	}
}

std::ostream & operator<<(std::ostream& out, TManager& tm)
{


	auto s = tm.boards.size();
	std::cout << "size " << s << std::endl;

	for (unsigned j = 0; j < s; j++)
	{
		out << "wins: " << std::endl << *tm.boards[j] << std::endl;

	}

	out << "x wins: " << tm.x_win << "\to wins: " << tm.o_win << "\tc wins: " << tm.c_win << std::endl;
	return out;
}


int TManager::choose_game()
{
	int choice;
	std::cout << "enter 3 if you want to play tictactoe 3" << std::endl;
	std::cout << "enter 4 if you want to play tictactoe 4" << std::endl;
	cin >> choice;
	return choice;
}


const std::vector<std::unique_ptr<TicTacToe>>& TManager::get_games()
{
	return boards;
}