#include "tic_tac_toe_board.h"
#include <string>
#include <vector>
#include <iostream>


using std::string; using std::vector; using std::endl; using std::cout; using std::cin;

int main()
{

	string yesno = "p";
	int i = 0; // counter to keep track of TicTacToe instances

	TicTacToe result;
	vector<TicTacToe>  ticvector{};

	while (yesno != "q")
	{
		TicTacToe tictactoe;

		cout << "these are the positions of the board" << endl;
		cout << "[1][2][3]" << endl;
		cout << "[4][5][6]" << endl;
		cout << "[7][8][9]" << endl;
		cout << "choose your peg (x or o): " << endl;
		std::string player;
		cin >> player;

		tictactoe.start_game(player);

		while (tictactoe.game_over() == false)
		{

			cout << endl << "choose which position you want to place your peg" << endl;
			cout << "by typing the number and pressing enter" << endl;
			cout << "player " << tictactoe.get_player() << " position is: ";
			cin >> tictactoe;      //overloaded operator>>
			
			cout << tictactoe << endl;
		}

		ticvector.push_back(tictactoe); //populates ticvector vector with a, b, and c instances
		cout << endl << "the game is over" << endl;
		cout << "would you like to play again? " << endl;
		cout << "type  q  to quit" << endl;
		cout << "press any other letter to continue" << endl;
		cin >> yesno;

		result += ticvector[i]; //accumulates wins and uses overloaded operator+= function

		cout << endl << " * - * - * - * - * - * - * - * - * - *" << endl;
		cout << "A C C U M U L A T E D     W I N S" << endl;
		cout << result << endl; //overloaded operator<<
		cout << " * - * - * - * - * - * - * - * - * - *" << endl;
	}

	return 0;
}
