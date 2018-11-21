#ifndef TIC_TAC_TOE_DATA_H
#define TIC_TAC_TOE_DATA_H

#include <vector>
#include <memory>
#include <string>
#include <iostream>
#include <fstream>
#include "tic_tac_toe_board.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

class TicTacToeData
{
public:
	TicTacToeData() = default;
	std::vector<std::unique_ptr<TicTacToe>> get_games();
	void save_pegs(std::vector<Peg>& pegs);

private:
	std::string file_name{ "tic_tac_toe.dat" };  //check this as it doesn't look right
	std::vector<std::string> pegs;
};

#endif //TIC_TAC_TOE_DATA_H