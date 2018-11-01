#include "tic_tac_toe_board.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <string>
#include <vector>
#include <iostream>

using std::string; using std::vector; using std::endl; using std::cout; using std::cin;


int main()
{

	string yesno = "p";
	int counter = 0;
	//int position;
	string player;
	bool over = false;


	while (yesno != "q")
	{

		TicTacToe3 tictactoe;
		//TicTacToe4 tictactoe;

		cout << "choose your peg (x or o): " << endl;
		cin >> tictactoe.player;


		tictactoe.start_game(tictactoe.player);

		while (over == false)
		{
			cout << "choose which position you want to place your peg" << endl;
			cout << "by typing the number and pressing enter" << endl;
			cout << tictactoe;
			cin >> tictactoe;
			cout << tictactoe;
			counter = counter + 1;
			tictactoe.player = tictactoe.get_player(tictactoe.player);
			over = tictactoe.game_over();

		}

		cout << "the game is over" << endl;
		cout << "would you like to play again? " << endl << "if yes, press y" << endl;
		cout << "if you want to quit, type q" << endl;
		cin >> yesno;

		over = false;
		counter = 0;

	}
	
	
	
}


