#include "tic_tac_toe_board.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
#include <string>
#include <vector>
#include <iostream>
#include <wx/wx.h>

using std::string; using std::vector; using std::endl; using std::cout; using std::cin;


int main()
{

	string yesno = "p";

	while (yesno != "q")
	{

		bool over = false;

		TManager tm;

		int gametype = tm.choose_game();

		std::unique_ptr<TManager> gmanager_ptr = std::make_unique<TManager>();

		if (gametype == 3)
		{
			auto game = gmanager_ptr->get_game(three);  //returns pointer to TicTacToe3 or TicTacToe4
			
			game->player = "x";
			game->start_game(game->player);
			

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

			gmanager_ptr->save_game(std::move(game));

			cout << *gmanager_ptr;
		}


		else if (gametype == 4)
		{
			auto game = gmanager_ptr->get_game(four);
		
			game->player = "x";
			game->start_game(game->player);


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

			gmanager_ptr->save_game(std::move(game));

			cout << *gmanager_ptr;
		}

		else
		{
			cout << "invalid entry. please type number 3 or 4" << std::endl;
		}

	}

	return 0;
}
