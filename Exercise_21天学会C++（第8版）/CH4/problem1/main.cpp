#include <iostream>
using namespace std;

int main()
{
	enum Square
	{
		Empty = 0,
		Pawn,
		Rook
	};

	Square chessBoard[8][8];
	chessBoard[0][0] = Rook;

	return 0;
}