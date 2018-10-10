#include "tic_tac_toe_board.h"
#include <string>
#include <vector>
#include <iostream>


using std::string; using std::vector; using std::endl; using std::cout; using std::cin;

int main()
{

	string yesno = "p";
	int counter = 0;
	int i = 0; // counter to keep track of TicTacToe instances
	bool over = false;

	TicTacToe tictactoe;
	TicTacToe result;
	vector<TicTacToe>  ticvector{};

	while ((yesno != "q") && (i <= 3))
	{

		if (i == 0)
			TicTacToe a = tictactoe;
		else if (i == 1)
			TicTacToe b = tictactoe;
		else if (i == 2)
			TicTacToe c = tictactoe;


		cout << "these are the positions of the board" << endl;
		cout << "[1][2][3]" << endl;
		cout << "[4][5][6]" << endl;
		cout << "[7][8][9]" << endl;
		cout << "choose your peg (x or o): " << endl;
		cin >> tictactoe.player;


		tictactoe.start_game(tictactoe.player);

		while ((over == false) && (counter < 9))
		{

			cout << endl << "choose which position you want to place your peg" << endl;
			cout << "by typing the number and pressing enter" << endl;
			cout << "player " << tictactoe.player << " position is: ";
			cin >> tictactoe.place;      //overloaded operator>>
			tictactoe.get_position(tictactoe.place);
			tictactoe.mark_board(tictactoe.position, tictactoe.player);

			counter = counter + 1;
			over = tictactoe.game_over();
			cout << tictactoe << endl;
			tictactoe.player = tictactoe.get_player(tictactoe.player);
		}

		ticvector.push_back(tictactoe); //populates ticvector vector with a, b, and c instances
		cout << endl << "the game is over" << endl;
		cout << "would you like to play again? " << endl;
		cout << "type  q  to quit" << endl;
		cout << "press any other letter to continue" << endl;
		cin >> yesno;

		result += ticvector[i]; //accumulates wins and uses overloaded operator+= function

		over = false;
		counter = 0;
		i = i + 1;

		cout << endl << " * - * - * - * - * - * - * - * - * - *" << endl;
		cout << "A C C U M U L A T E D     W I N S" << endl;
		cout << result << endl; //overloaded operator<<
		cout << " * - * - * - * - * - * - * - * - * - *" << endl;
	}

}
