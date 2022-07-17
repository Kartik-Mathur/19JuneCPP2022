#include <iostream>
using namespace std;

int main() {

	int a[8] = {1, 1, 1, 0, 1, 1, 1, 1};

	int old[10] = {0}, newa[10] = {0};
	for (int i = 1; i <= 8; ++i)
	{
		old[i] = a[i - 1];
	}

	for (int i = 0; i < 10; ++i)
	{
		cout << old[i] << " ";
	}
	cout << endl;
	int days = 2;
	while (days--) {
		for (int i = 1; i <= 8; ++i)
		{
			if (old[i - 1] == old[i + 1]) {
				newa[i] = 0;
			}
			else {
				newa[i] = 1;
			}
		}

		for (int i = 1; i <= 8; ++i)
		{
			old[i] = newa[i];
		}
		cout << "Day: " << days << endl;
		for (int i = 0; i <= 9; ++i)
		{
			cout << old[i] << " ";
		} cout << endl;

	}

	for (int i = 1; i <= 8; ++i)
	{
		cout << old[i] << " ";
	} cout << endl;

	return 0;
}
















