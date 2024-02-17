#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int input,check_num = 0;
	cin >> input;
	int num = 666;
	
	while (true)
	{
		if (to_string(num).find("666") != string::npos)
			++check_num;
		if (check_num == input)
			break;
		++num;
	}
	cout << num;
	return 0;
}
