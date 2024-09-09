#include <bits/stdc++.h>

int temp1;
int temp2 = 0;
bool ascend = true;
int main() {
	for (int i = 0; i < 8; i++)
	{
		std::cin >> temp1;
		if (temp1 == 1 and i == 0)
		{
			ascend = true;
			temp2 = temp1;
		}
		else if (temp1 == 8 and i == 0)
		{
			ascend = false;
			temp2 = temp1;
		}
		else
		{
			if (temp2 == 0)
			{
				temp2 = temp1;
				continue;
			}
			int ans = temp2 - temp1;
			if (ans < 0)
				ans *= -1;
			if (ans > 1)
			{
				std::cout << "mixed";
				return 0;
			}
			temp2 = temp1;
		}
	}
	if (ascend)
		std::cout << "ascending";
	else
		std::cout << "descending";

	return 0;
}