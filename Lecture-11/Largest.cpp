#include <iostream>
using namespace std;

int Length(char *a) {
	int cnt = 0;

	for (int i = 0; a[i] != '\0' ; ++i)
	{
		cnt++;
	}
	return cnt;
}

void Copy(char *largest, char *a) {
	int lena = Length(a);
	for (int i = 0; i <= lena; ++i)
	{
		largest[i] = a[i];
	}
}

int main() {
	char a[100];
	int large_len =  0;
	char largest[1000];

	int n;
	cin >> n;
	cin.ignore(); // or cin.get()

	for (int i = 0; i < n; ++i)
	{
		cin.getline(a, 100);
		int lena = Length(a);
		if (lena > large_len) {
			Copy(largest, a);
			large_len = lena;
		}
	}
	cout << "Largest len: " << large_len << endl;
	cout << "Largest string: " << largest << endl;


	return 0;
}
















