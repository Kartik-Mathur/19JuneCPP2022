#include <iostream>
#include <cstring>
using namespace std;

char keys[][10] = {
	"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"
};

string contacts[100] = {
	"VARUN",
	"NOBITA",
	"GIAN",
	"DORAEMON",
	"HIMANI"
};

void PhoneKeypad(char*in, int i, char *out, int j) {
	// base case
	if (in[i] == '\0') { // 82786: Varun aaega ispar
		out[j] = '\0';
		string x(out); // x ek string bann gai jiski value is same as out
		for (int i = 0 ; i < 5 ; i++) {
			if (x == contacts[i])
				cout << x << endl;
		}
		return;
	}
	// recursive case
	int d = in[i] - '0';
	for (int k = 0; keys[d][k] != '\0'; ++k)
	{
		out[j] = keys[d][k];
		PhoneKeypad(in, i + 1, out, j + 1);
	}
}

int main() {

	char in[100], out[100];

	cin >> in;
	PhoneKeypad(in, 0, out, 0);

	return 0;
}
















