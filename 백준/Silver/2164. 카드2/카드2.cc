#include <bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	queue<int> card_arr;
	int card_num;
	cin >> card_num;
	
	for (int i = 1; i < card_num+1; ++i)
	{
		card_arr.push(i);
	}
	while (true)
	{
		if (1 == card_arr.size())
			break;
		card_arr.pop();
		card_arr.push(card_arr.front());
		card_arr.pop();
	}
	cout << card_arr.front();
	return 0;
}
