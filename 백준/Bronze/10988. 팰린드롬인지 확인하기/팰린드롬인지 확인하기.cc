#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	vector<char> vec_char;
	string input;

	cin >> input;
	copy(input.begin(), input.end(), back_inserter(vec_char));
	
	for (int i = 0; i < vec_char.size(); ++i)
	{
		if (vec_char.at(i) == vec_char.at(vec_char.size() - 1 - i))
			continue;
		else
		{
			cout << "0";
			return 0;
		}
	}
	cout << "1";
	return 0;
}