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
	
	bool over = false;


	while (yesno != "q")
	{

		TManager tm;

		cout << "enter three if you want to play tictactoe 3 and four if tictactoe 4" << endl;
		auto g = tm.choose_game();

		std::unique_ptr<TManager> gg = std::make_unique<TManager>();
		auto game = gg->get_game(g);

		//auto game = tm.get_game(g);
		game->start_game();
		game->play_game();

		cout << "the game is over" << std::endl;
		cout << "would you like to play again? " << std::endl << "if yes, press y" << std::endl;
		cout << "if you want to quit, type q" << std::endl;
		cin >> yesno;
		//std::unique_ptr<TManager> gg = std::make_unique<TManager>();
		//gg->save_game(std::move(game));


	}
}

