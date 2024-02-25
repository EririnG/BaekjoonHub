#include <bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	vector<int> card_arr;
	int card_num;
	cin >> card_num;
	for (int i = 1; i < card_num+1; ++i)
	{
		int tmp;
		cin >> tmp;
		card_arr.push_back(tmp);
	}
	sort(card_arr.begin(), card_arr.end());
	int m;
	cin >> m;
	for (int i = 0; i < m; ++i)
	{
		int tmp;
		cin >> tmp;
		
		cout << upper_bound(card_arr.begin(), card_arr.end(),tmp) - lower_bound(card_arr.begin(), card_arr.end(), tmp)  << " ";
	}

	return 0;
}
