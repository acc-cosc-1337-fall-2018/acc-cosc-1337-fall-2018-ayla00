#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_board.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "peg.h"
#include <iostream>
#include <memory>


std::unique_ptr<TicTacToe> TManager::get_game(int type)
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
	TManager tm;
	std::unique_ptr<TManager> gg = std::make_unique<TManager>();
	auto game = gg->get_game(tm.type);

	boards.push_back(std::move(tptr));
	string s = game->get_winner();
	tm.update_winner_count(s);
	std::cout << "value " << s << std::endl;
	//tm.update_winner_count(value);

}


void TManager::update_winner_count(std::string& value)
{

	if (value == "x")
	{
		std::cout << "it's updating x " << std::endl;
		x_win += 1;
		o_win = o_win;
		c_win = c_win;

		std::cout << "x: " << x_win << std::endl;
	}
	else if (value == "o")
	{
		o_win += 1;
		x_win = o_win;
		c_win = c_win;
		std::cout << "o: " << o_win << std::endl;
	}
	else if (value == "c")
	{
		c_win += 1;
		x_win = o_win;
		o_win = o_win;
		std::cout << "c: " << c_win << std::endl;
	}
}

std::ostream & operator<<(std::ostream& out, TManager& tm)
{


	auto s = tm.boards.size();
	std::cout << "size " << s << std::endl;

	for (unsigned j = 0; j < s; j++)
	{
		out << "wins: " << std::endl << *tm.boards[j] << std::endl;
		//out << "wins: " << *tm.boards[j] << std::endl; shows me the actual board and values, the whole game
	}


	out << "x wins: " << tm.x_win << "\to wins: " << tm.o_win << "\tc wins: " << tm.c_win << std::endl;
	return out;
}


int TManager::choose_game()
{
	int choice;
	std::cout << "enter your choice of 0 or 1 to play." << std::endl;
	cin >> choice;
	return choice;
}


const std::vector<std::unique_ptr<TicTacToe>>& TManager::get_games()
{
	return boards;
}