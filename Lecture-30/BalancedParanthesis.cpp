// BalancedParanthesis.cpp
#include <iostream>
#include <stack>
using namespace std;

bool isBalancedParenthesis(char *a) {
	stack<char> s;

	for (int i = 0; a[i] != '\0'; ++i)
	{
		char ch = a[i];
		switch (ch) {
		case '{':
		case '(':
		case '[':
			s.push(ch);
			break;
		case ')':
			if (s.empty() || s.top() != '(') {
				return false;
			}
			s.pop();
			break;
		case '}':
			if (s.empty() || s.top() != '{') {
				return false;
			}
			s.pop();
			break;
		case ']':
			if (s.empty() || s.top() != '[') {
				return false;
			}
			s.pop();
		}
	}

	if (s.empty()) return true;
	else return false;
}

int main() {

	char a[] = "{a+[b*(c+d)]*e}";

	if (isBalancedParenthesis(a)) {
		cout << "Balanced hai\n";
	}
	else {
		cout << "Balanced nahi hai\n";
	}

	return 0;
}
















