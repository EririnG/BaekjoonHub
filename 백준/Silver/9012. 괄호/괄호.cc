#include <bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int num_case;
	cin >> num_case;
	
	for (int i = 0; i < num_case; ++i)
	{
		vector<char> st;
		string input;
		cin >> input;

		for (int j = 0; j < input.length(); ++j)
		{
			if (st.empty() || input[j] == '(')
				st.push_back(input[j]);
			else if (st.front() == '(')
				st.pop_back();
		}
		if (st.empty())
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';
	}

	return 0;
}
