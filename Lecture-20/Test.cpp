#include <iostream>
using namespace std;

bool isSafe(int board[][100], int i, int j, int n) {
	int l = i, m = j;
	for (int k = 0; k < n; ++k)
	{
		if (board[k][j] == 1 || board[i][k] == 1) {
			return false;
		}
	}
	// Check upper right diagonal
	while (i >= 0 and j < n) {
		if (board[i][j] == 1) {
			return false;
		}
		i--; j++;
	}

	// Check upper left diagonal
	while (l >= 0 and m >= 0) {
		if (board[l--][m--]) {
			return false;
		}
	}
	return true;
}

bool NQueen(int board[][100], int i, int n) {
	// base case
	if (i == n) {
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				// cout << board[i][j] << " ";
				board[i][j] == 1 ? cout << "Q " : cout << "_ ";
			}
			cout << endl;
		}
		cout << endl;
		return false;
	}

	// recursive case
	// Har column par jaao ith row ke
	for (int j = 0 ; j < n ; j++) {
		// Check karlo jis cell par ho waha queen rakhna safe hai ya nhi
		if (isSafe(board, i, j, n) == true) {
			board[i][j] = 1; // Agar safe hai toh rakhdo

			// Ab baaki n-1 queens recursion ko pucho usne rakhi ya nhi?
			bool kyaBakiPlaceHui = NQueen(board, i + 1, n);
			// Agar place ho gai toh bas bann gai baat
			if (kyaBakiPlaceHui == true) {
				return true;
			}
			// Agar place nhi ho paai queens toh jo rakhi thi uski pos galat h
			board[i][j] = 0; // backtracking
		}
	}
	return false; // Har column par check kar lia kahi nhi place hui, ab return false
}


int main() {

	int board[100][100];

	NQueen(board, 0, 4);

	return 0;
}
















