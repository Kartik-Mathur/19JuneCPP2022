class Solution {
public:
	vector<int> nextGreaterElement(vector<int>& a) {
		stack<int> s;
		vector<int> ng(a.size());
		// for (int i = 0; i < n; ++i)
		// {
		// 	if (s.empty() || a[s.top] > a[i]) {
		// 		s.push(i);
		// 	}
		// 	else {
		// 		while (!s.empty() and a[s.top()] < a[i]) {
		// 			ng[s.top()] = i;
		// 			s.pop();
		// 		}
		// 		s.push(i);
		// 	}
		// }
		for (int i = 0; i < n; ++i)
		{
			while (!s.empty() and a[s.top()] < a[i]) {
				ng[s.top()] = i;
				s.pop();
			}
			s.push(i);
		}

		while (!s.empty()) {
			ng[s.top()] = -1;
			s.pop();
		}

	}
};