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
	if (type == three)
		boards.push_back(std::move(tptr));
	else if (type == four)
		boards.push_back(std::move(tptr));
}

void TManager::get_win(string& value)
{
	std::cout << "value " << value << std::endl;
	value = value;
	update_winner_count(value);
	std::cout << "wins " << x_win << std::endl;
}


void TManager::update_winner_count(std::string& value)
{
	if (value == "x")
		x_win += 1;
	else if (value == "o")
		o_win += 1;
	else
		c_win += 1;
}

std::ostream & operator<<(std::ostream& out, TManager& tm)
{

	auto s = tm.boards.size();
	std::cout << "size " << s << std::endl;
	//auto s = 1;

	for (auto j = 0; j < s; j++)
	{
		//tm.boards[j]->update_winner_count();
		out << "wins: " << tm.boards[j] << std::endl;  //should be out << "wins: " << *tm.boards[j] << std::endl;

	}


	return out;
}


int TManager::choose_game()
{
	int choice;
	std::cout << "enter your choice of 0 or 1 to play." << std::endl;
	cin >> choice;
	return choice;
}