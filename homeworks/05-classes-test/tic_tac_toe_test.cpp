#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "tic_tac_toe_board.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "peg.h"

TEST_CASE("test win by first column", "[x wins first column]")
{
	TicTacToe3 board;
	board.start_game("x");
	board.mark_board(1); //x
	board.mark_board(3);//o
	board.mark_board(4);//x
	board.mark_board(5);//o
	board.mark_board(7);//x
	// x wins

	REQUIRE(board.game_over() == true);
	//board.clearvector();

}

TEST_CASE("test win by second column", "[x wins second column]")
{
	TicTacToe3 board;
	board.start_game("x");
	board.mark_board(2);//x
	board.mark_board(4); //o
	board.mark_board(5);//x
	board.mark_board(6);//o
	board.mark_board(8);//x
	// x wins

	REQUIRE(board.game_over() == true);
	//board.clearvector;

}

TEST_CASE("test win by third column", "[x wins third column]")
{
	TicTacToe3 board;
	board.start_game("x");
	board.mark_board(3);//x
	board.mark_board(4); //o
	board.mark_board(6);//x
	board.mark_board(7);//o
	board.mark_board(9);//x
	// x wins

	REQUIRE(board.game_over() == true);
	//board.clearvector;

}

TEST_CASE("test win by first row", "[x wins first row]")
{
	TicTacToe3 board;
	board.start_game("x");
	board.mark_board(1);//x
	board.mark_board(4); //o
	board.mark_board(2);//x
	board.mark_board(6);//o
	board.mark_board(3);//x
	// x wins

	REQUIRE(board.game_over() == true);
	//board.clearvector;

}

TEST_CASE("test win by secon row", "[x wins second row]")
{
	
	TicTacToe3 board;
	board.start_game("x");
	board.mark_board(4);//x
	board.mark_board(3); //o
	board.mark_board(5);//x
	board.mark_board(8);//o
	board.mark_board(6);//x
	// x wins

	REQUIRE(board.game_over() == true);
	//board.clearvector;

}

TEST_CASE("test win by third row", "[x wins third row]")
{
	TicTacToe3 board;
	board.start_game("x");
	board.mark_board(7);//x
	board.mark_board(4); //o
	board.mark_board(8);//x
	board.mark_board(6);//o
	board.mark_board(9);//x
	// x wins

	REQUIRE(board.game_over() == true);
	//board.clearvector;

}

TEST_CASE("test win diagonally from top left", "[x wins diagonally]")
{
	TicTacToe3 board;
	board.start_game("x");
	board.mark_board(1);//x
	board.mark_board(4); //o
	board.mark_board(5);//x
	board.mark_board(6);//o
	board.mark_board(9);//x
	// x wins  

	REQUIRE(board.game_over() == true);
	//board.clearvector;

}

TEST_CASE("test win diagonally from bottom left", "[x wins diagonally]")
{
	TicTacToe3 board;
	board.start_game("x");
	board.mark_board(3);//x
	board.mark_board(4); //o
	board.mark_board(5);//x
	board.mark_board(1);//o
	board.mark_board(7);//x
	// x wins

	REQUIRE(board.game_over() == true);
	//board.clearvector;

}

TEST_CASE("test no winner", "[x no win]")
{
	TicTacToe3 board;
	board.start_game("x");
	board.mark_board(1);//x
	board.mark_board(2); //o
	board.mark_board(3);//x
	board.mark_board(4);//o
	board.mark_board(6);//x
	board.mark_board(5); //o
	board.mark_board(7);//x
	board.mark_board(9);//o
	board.mark_board(8);//x
	// no one wins

	REQUIRE(board.game_over() == true);
	//board.clearvector;

}

TEST_CASE("Test game over o", "[returns ?]")
{
	
	TicTacToe3 board;
	board.start_game("x");
	board.mark_board(3);//o
	board.mark_board(4); //x
	board.mark_board(5);//o
	board.mark_board(1);//x
	board.mark_board(7);//o
	

	REQUIRE(board.game_over() == true);

	//board.clearvector;
}

TEST_CASE("Test first player to x", "[returns o]")
{
	TicTacToe3 board;
	board.start_game("x");
	board.set_next_player();

	REQUIRE(board.get_player() == "o");
}

TEST_CASE("Test first player to o", "[returns x]")
{
	TicTacToe3 board;
	board.start_game("o");
	board.set_next_player;


	REQUIRE(board.get_player() == "x");
}






TEST_CASE("4 - test win by first column", "[x wins first column]")
{
	TicTacToe4 board;
	board.start_game("x");
	board.mark_board(1); //x
	board.mark_board(3);//o
	board.mark_board(5);//x
	board.mark_board(6);//o
	board.mark_board(9);//x
	board.mark_board(11);//o
	board.mark_board(13);//x
	// x wins

	REQUIRE(board.game_over() == true);
	//board.clearvector;

}

TEST_CASE("4 - test win by second column", "[x wins second column]")
{
	TicTacToe4 board;
	board.start_game("x");
	board.mark_board(2);//x
	board.mark_board(4); //o
	board.mark_board(6);//x
	board.mark_board(8);//o
	board.mark_board(10);//x
	board.mark_board(15);//o
	board.mark_board(14);//x
	// x wins

	REQUIRE(board.game_over() == true);
	//board.clearvector;

}

TEST_CASE("4 - test win by third column", "[x wins third column]")
{
	TicTacToe4 board;
	board.start_game("x");
	board.mark_board(3);//x
	board.mark_board(4); //o
	board.mark_board(7);//x
	board.mark_board(5);//o
	board.mark_board(11);//x
	board.mark_board(13);//o
	board.mark_board(15);//x
	// x wins

	REQUIRE(board.game_over() == true);
	//board.clearvector;

}


TEST_CASE("4 - test win by fourth column", "[x wins third column]")
{
	TicTacToe4 board;
	board.start_game("x");
	board.mark_board(4);//x
	board.mark_board(1); //o
	board.mark_board(8);//x
	board.mark_board(5);//o
	board.mark_board(12);//x
	board.mark_board(10);//o
	board.mark_board(16);//x
	// x wins

	REQUIRE(board.game_over() == true);
	//board.clearvector;

}


TEST_CASE("4 - test win by first row", "[x wins first row]")
{
	
	TicTacToe4 board;
	board.start_game("x");
	board.mark_board(1);//x
	board.mark_board(5); //o
	board.mark_board(2);//x
	board.mark_board(6);//o
	board.mark_board(3);//x
	board.mark_board(11);//o
	board.mark_board(4);//x
	// x wins

	REQUIRE(board.game_over() == true);
	//board.clearvector;

}

TEST_CASE("4 - test win by secon row", "[x wins second row]")
{
	TicTacToe4 board;
	board.start_game("x");
	board.mark_board(5);//x
	board.mark_board(2); //o
	board.mark_board(6);//x
	board.mark_board(12);//o
	board.mark_board(7);//x
	board.mark_board(9);//o
	board.mark_board(8);//x
	// x wins

	REQUIRE(board.game_over() == true);
	//board.clearvector;

}

TEST_CASE("4 - test win by third row", "[x wins third row]")
{
	TicTacToe4 board;
	board.start_game("x");
	board.mark_board(9);//x
	board.mark_board(4); //o
	board.mark_board(10);//x
	board.mark_board(6);//o
	board.mark_board(11);//x
	board.mark_board(8);//o
	board.mark_board(12);//x
	// x wins

	REQUIRE(board.game_over() == true);
	//board.clearvector;

}

TEST_CASE("4 - test win by fourth row", "[x wins third row]")
{
	TicTacToe4 board;
	board.start_game("x");
	board.mark_board(13);//x
	board.mark_board(4); //o
	board.mark_board(14);//x
	board.mark_board(6);//o
	board.mark_board(15);//x
	board.mark_board(8);//o
	board.mark_board(16);//x
	// x wins

	REQUIRE(board.game_over() == true);
	//board.clearvector;

}

TEST_CASE("4 - test win diagonally from top left", "[x wins diagonally]")
{
	TicTacToe4 board;
	board.start_game("x");
	board.mark_board(1);//x
	board.mark_board(4); //o
	board.mark_board(6);//x
	board.mark_board(3);//o
	board.mark_board(11);//x
	board.mark_board(9);//o
	board.mark_board(16);//x
	// x wins

	REQUIRE(board.game_over() == true);
	//board.clearvector;

}

TEST_CASE("4 - test win diagonally from bottom left", "[x wins diagonally]")
{
	TicTacToe4 board;
	board.start_game("x");
	board.mark_board(4);//x
	board.mark_board(1); //o
	board.mark_board(7);//x
	board.mark_board(5);//o
	board.mark_board(10);//x
	board.mark_board(6);//o
	board.mark_board(13);//x
	// x wins

	REQUIRE(board.game_over() == true);
	//board.clearvector;

}

TEST_CASE("4 - test no winner", "[x no win]")
{
	TicTacToe4 board;
	board.start_game("x");
	board.mark_board(1);//x
	board.mark_board(2); //o
	board.mark_board(5);//x
	board.mark_board(3);//o
	board.mark_board(7);//x
	board.mark_board(4); //o
	board.mark_board(10);//x
	board.mark_board(6);//o
	board.mark_board(12);//x
	board.mark_board(8);//o
	board.mark_board(13);//x
	board.mark_board(9); //o
	board.mark_board(15);//x
	board.mark_board(11);//o
	board.mark_board(16);//x
	board.mark_board(14);//o
	// no one wins

	REQUIRE(board.game_over() == true);
	//board.clearvector;

}

/*
TEST_CASE("4 - Test game over o", "[returns x]")  //???????????????????????
{
	TicTacToe3 t;
	t.choice = 4;
	TicTacToe4 board;
	board.start_game("x");
	board.mark_board(2);//x
	board.mark_board(3); //o
	board.mark_board(4);//x
	board.mark_board(0);//o
	board.mark_board(6);//x


	REQUIRE(board.game_over() == true);
}
*/

TEST_CASE("4 - Test first player to x", "[returns o]")
{
	
	TicTacToe4 board;
	board.start_game("x");
	board.set_next_player();

	REQUIRE(board.get_player() == "o");
}

TEST_CASE("4 - Test first player to o", "[returns x]")
{
	TicTacToe4 board;
	board.start_game("x");
	board.set_next_player();


	REQUIRE(board.get_player() == "o");
}