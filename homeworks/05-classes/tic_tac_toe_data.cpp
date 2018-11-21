#include "tic_tac_toe_data.h"


std::vector<std::unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
	//std::string ticline;
	std::string ticline;
	std::string ticstring;
	std::ifstream file_name;
	file_name.open("tic_tac_toe.dat", std::ios::in);  //open file
	unsigned t;

	std::unique_ptr<TicTacToe> board;
	std::unique_ptr<TManager> tmanager = std::make_unique<TManager>();

	auto boards = tmanager->get_games(); //gets get_games from TManager

	while (getline(file_name, ticline))  //get a line from file & while file open (may need to use is_open())
	{
		//std::vector<Peg> vectorpeg
		t = ticline.size();
		for (unsigned j = 0; j < t; j++)  //for each character in line
		{
			ticstring = ticline[j];  //create string with character
			pegs[j] = ticstring;   //add peg to vector of pegs
		}
	}



	if (t == 9)  //create unique pointer of tictactoe
	{
		board = std::make_unique<TicTacToe3>();
		boards.push_back(std::move(board));
	}
	else
	{
		board = std::make_unique<TicTacToe4>();
		boards.push_back(std::move(board));
	}

	file_name.close();  //close the file

	return boards;  //return the boards vector
}


void TicTacToeData::save_pegs(std::vector<Peg>& pegs)
{
	auto s = pegs.size();
	std::ofstream file_name;
	file_name.open("tic_tac_toe.dat", std::ios::out |  std::ios::app);

	for (unsigned i = 0; i < s; i++)
	{
		file_name << pegs[i].val;
	}

	file_name << "\n";
	file_name.close();
}