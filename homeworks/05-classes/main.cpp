#include "tic_tac_toe_board.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
#include <string>
#include <vector>
#include <iostream>

using std::string; using std::vector; using std::endl; using std::cout; using std::cin;


int main()
{

	string yesno = "p";

	while (yesno != "q")
	{

		bool over = false;

		TManager tm;

		cout << "enter three if you want to play tictactoe 3 and four if tictactoe 4" << endl;
		auto g = tm.choose_game();

		std::unique_ptr<TManager> gg = std::make_unique<TManager>();
		auto game = gg->get_game(g);  //returns pointer to TicTacToe3 or TicTacToe4

		game->start_game();
		game->player = game->get_player();

		while (over == false)
		{

			cout << "choose which position you want to place your peg" << std::endl;
			cout << "by typing the number and pressing enter" << std::endl;
			cout << *game;  //game->display_board();
			cin >> *game;
			cout << *game;

			over = game->game_over();

		}

		cout << "the game is over" << std::endl;
		cout << "would you like to play again? " << std::endl << "if yes, press y" << std::endl;
		cout << "if you want to quit, type q" << std::endl;
		cin >> yesno;

		std::unique_ptr<TManager> gmanager = std::make_unique<TManager>();
		gmanager->save_game(std::move(game));

		cout << *gmanager;

	}

	return 0;
}
