// Factorial.cpp
#include <iostream>
using namespace std;

int fact(int n) {
	int ans = 1;
	for (int i = 1; i <= n; ++i)
	{
		ans = ans * i;
	}
	return ans;
}

int nCr(int n, int r) {
	int fact_n = fact(n);
	int fact_r = fact(r);
	int fact_nr = fact(n - r);

	int ans = fact_n / (fact_r * fact_nr);
	return ans;
}


int main() {

	int n = 5, r = 2;
	cout << nCr(5, 2) << endl;


	return 0;
}
















