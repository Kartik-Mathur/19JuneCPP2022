// StringLength.cpp
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

int main() {

	char a[] = "Hello World";

	cout << Length(a) << endl;

	return 0;
}
















