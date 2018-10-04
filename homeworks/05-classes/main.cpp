#include "tic_tac_toe_board.h"
#include <string>
#include <vector>
#include <iostream>


using std::string; using std::vector; using std::endl; using std::cout; using std::cin;

int main()
{

	string yesno = "p";
	int counter = 0;
	int place = 0;
	string player;
	int lugar = -1;
	bool over = false;


	while (yesno != "q")
	{
		cout << "please choose your peg : x or o" << std::endl;
		cin >> player;
		cout << "these are the positions of the board" << endl;
		cout << "[1]" << "[2]" << "[3]" << endl;
		cout << "[4]" << "[5]" << "[6]" << endl;
		cout << "[7]" << "[8]" << "[9]" << endl;

		TicTacToe tictactoe(place, player);

		tictactoe.start_game(player);

		while ((over == false) && (counter < 9))
		{

			cout << "choose which position you want to place your peg" << endl;
			cout << "by typing the number and pressing enter" << endl;
			tictactoe.display_board();
			cin >> lugar;
			place = lugar - 1;
			tictactoe.mark_board(place, player);
			tictactoe.display_board();
			counter = counter + 1;
			player = tictactoe.get_player(player);
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