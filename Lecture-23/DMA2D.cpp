// DMA2D.cpp
#include <iostream>
using namespace std;

int main() {
	int rows, cols;
	cin >> rows >> cols;

	int **a = new int*[rows];

	for (int i = 0; i < rows; ++i)
	{
		a[i] = new int[cols];
	}

	int number = 1;
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			a[i][j] = number ++;
		}
	}

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
















