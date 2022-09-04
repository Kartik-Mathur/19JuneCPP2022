// 2DVector - Array.cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {

	// vector< vector<data_type> > v(rows, vector<data_type>(cols, initial_value));
	int rows, cols;
	cin >> rows >> cols;

	vector<vector<int> > v(rows, vector<int>(cols));
	int number = 1;
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			v[i][j] = number++;
		}
	}

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			cout << v[i][j] << " ";
		}
		cout << endl;
	}


	return 0;
}
















