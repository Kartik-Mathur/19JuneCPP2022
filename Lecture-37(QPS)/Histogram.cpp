// Histogram.cpp
class Solution {
public:
	int largestRectangleArea(vector<int>& a) {
		stack<int> s;
		vector<int> next_smaller(a.size());
		vector<int> prev_smaller(a.size());
		int n = a.size();
		for (int i = 0; i < n; ++i)
		{
			while (!s.empty() and a[s.top()] > a[i]) {
				next_smaller[s.top()] = i;
				s.pop();
			}
			s.push(i);
		}

		while (!s.empty()) {
			next_smaller[s.top()] = n;
			s.pop();
		}

		for (int i = n - 1; i >= 0; --i)
		{
			while (!s.empty() and a[s.top()] > a[i]) {
				prev_smaller[s.top()] = i;
				s.pop();
			}
			s.push(i);
		}

		while (!s.empty()) {
			prev_smaller[s.top()] = -1;
			s.pop();
		}

		// for (int i = 0; i < n; ++i)
		// {
		// 	cout << next_smaller[i] << " ";
		// }
		// cout <<  endl;
		// for (int i = 0; i < n; ++i)
		// {
		// 	cout << prev_smaller[i] << " ";
		// }
		// cout <<  endl;
		int ans = 0;
		for (int i = 0; i < n; ++i)
		{
			int l = next_smaller[i] - prev_smaller[i] - 1;
			int h = a[i];
			int area = l * h;
			ans = max(ans, area);
		}
		return ans;
	}
};















