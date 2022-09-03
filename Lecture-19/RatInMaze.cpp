#include <iostream>
using namespace std;

bool RatInMaze(char maze[][5], int sol[][10], int i, int j, int n, int m) {
	// base case
	if (i == n - 1 and j == m - 1) {
		sol[i][j] = 1;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				cout << sol[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		return false;
	}

	// recursive case
	sol[i][j] = 1; // Ho sakta hai i,j solution ka part ho

	// 1. Check right se raasta milla? --> (i,j+1)
	if (j + 1 < m and maze[i][j + 1] != 'X') {
		bool kyaRightSeRaastaMilla = RatInMaze(maze, sol, i, j + 1, n, m);
		if (kyaRightSeRaastaMilla == true) {
			return true;
		}
	}
	// 2. Check neeche se raasta mila? --> (i+1,j)
	if (i + 1 < n and maze[i + 1][j] != 'X') {
		bool kyaNeecheSeRaastaMilla = RatInMaze(maze, sol, i + 1, j, n, m);
		if (kyaNeecheSeRaastaMilla == true) {
			return true;
		}
	}

	sol[i][j] = 0;
	return false;
}

int main() {

	char maze[][5] = {
		"0000",
		"00XX",
		"0000",
		"XX00"
	};
	int sol[10][10] = {0};

	RatInMaze(maze, sol, 0, 0, 4, 4);



	return 0;
}
















