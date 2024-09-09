#include <bits/stdc++.h>
using namespace std;

int main() 
{
	bool ascend = true;
	bool descend = true;
	vector<int> array;

	for (int i = 0; i < 8; ++i)
	{
		int temp;
		cin >> temp;
		array.push_back(temp);
	}

	for (int i = 1; i < 8; ++i)
	{
		if (array[i] > array[i - 1])
			descend = false;
		else if (array[i] < array[i - 1])
			ascend = false;
	}

	if (ascend)
		cout << "ascending";
	else if (descend)
		cout << "descending";
	else
		cout << "mixed";

	return 0;
}