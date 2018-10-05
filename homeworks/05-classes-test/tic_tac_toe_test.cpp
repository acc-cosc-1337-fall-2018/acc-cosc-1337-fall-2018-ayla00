#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "tic_tac_toe_board.h"

TEST_CASE("test win by first column", "[x wins first column]")
{
	TicTacToe board(0,"x");
	board.start_game("x");
	board.mark_board(0,"x"); //x
	board.mark_board(2, "o");//o
	board.mark_board(3, "x");//x
	board.mark_board(5, "o");//o
	board.mark_board(6, "x");//x
	// x wins

	REQUIRE(board.game_over() == true);

}

TEST_CASE("test win by second column", "[x wins second column]")
{
	TicTacToe board(1,"x");
	board.start_game("x");
	board.mark_board(1, "x");//x
	board.mark_board(3, "o"); //o
	board.mark_board(4, "x");//x
	board.mark_board(5, "o");//o
	board.mark_board(7, "x");//x
	// x wins

	REQUIRE(board.game_over() == true);

}

TEST_CASE("test win by third column", "[x wins third column]")
{
	TicTacToe board(2,"x");
	board.start_game("x");
	board.mark_board(2, "x");//x
	board.mark_board(3, "o"); //o
	board.mark_board(5, "x");//x
	board.mark_board(6, "o");//o
	board.mark_board(8, "x");//x
	// x wins

	REQUIRE(board.game_over() == true);

}

TEST_CASE("test win by first row", "[x wins first row]")
{
	TicTacToe board(0,"x");
	board.start_game("x");
	board.mark_board(0, "x");//x
	board.mark_board(3, "o"); //o
	board.mark_board(1, "x");//x
	board.mark_board(5, "o");//o
	board.mark_board(2, "x");//x
	// x wins

	REQUIRE(board.game_over() == true);

}

TEST_CASE("test win by secon row", "[x wins second row]")
{
	TicTacToe board(3,"x");
	board.start_game("x");
	board.mark_board(3,"x");//x
	board.mark_board(1, "o"); //o
	board.mark_board(4, "x");//x
	board.mark_board(7, "o");//o
	board.mark_board(5, "x");//x
	// x wins

	REQUIRE(board.game_over() == true);

}

TEST_CASE("test win by third row", "[x wins third row]")
{
	TicTacToe board(6,"x");
	board.start_game("x");
	board.mark_board(6, "x");//x
	board.mark_board(3, "o"); //o
	board.mark_board(7, "x");//x
	board.mark_board(5, "o");//o
	board.mark_board(8, "x");//x
	// x wins

	REQUIRE(board.game_over() == true);

}

TEST_CASE("test win diagonally from top left", "[x wins diagonally]")
{
	TicTacToe board(0,"x");
	board.start_game("x");
	board.mark_board(0, "x");//x
	board.mark_board(3, "o"); //o
	board.mark_board(4, "x");//x
	board.mark_board(5,"o");//o
	board.mark_board(8, "x");//x
	// x wins

	REQUIRE(board.game_over() == true);

}

TEST_CASE("test win diagonally from bottom left", "[x wins diagonally]")
{
	TicTacToe board(2,"x");
	board.start_game("x");
	board.mark_board(2, "x");//x
	board.mark_board(3, "o"); //o
	board.mark_board(4, "x");//x
	board.mark_board(0, "o");//o
	board.mark_board(6, "x");//x
	// x wins

	REQUIRE(board.game_over() == true);

}

TEST_CASE("test no winner", "[x no win]")
{
	TicTacToe board(0,"x");
	board.start_game("x");
	board.mark_board(0, "x");//x
	board.mark_board(1, "o"); //o
	board.mark_board(2, "x");//x
	board.mark_board(3, "o");//o
	board.mark_board(5, "x");//x
	board.mark_board(4, "o"); //o
	board.mark_board(6, "x");//x
	board.mark_board(8, "o");//o
	board.mark_board(7, "x");//x
	// no one wins

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test game over o", "[returns x]")
{
	TicTacToe board(2,"x");
	board.start_game("x");
	board.mark_board(2, "x");//x
	board.mark_board(3, "o"); //o
	board.mark_board(4, "x");//x
	board.mark_board(0, "o");//o
	board.mark_board(6, "x");//x
	

	REQUIRE(game_over() == true)
}

TEST_CASE("Test first player to x", "[returns o]")
{
	TicTacToe board(0, "x");
	board.start_game("x");
	board.get_player("x");

	REQUIRE(get_player("x") == "o")
}

TEST_CASE("Test first player to o", "[returns x]")
{
	TicTacToe board(1,"o");
	board.start_game("o");
	board.get_player("o");
	

	REQUIRE(get_player("o") == "x")
}