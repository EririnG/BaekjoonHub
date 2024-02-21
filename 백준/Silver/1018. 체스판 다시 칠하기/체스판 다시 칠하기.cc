#include <bits/stdc++.h>
using namespace std;

string WB[8] =
{
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
};

string BW[8] =
{
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
};

string board[50];
int cntWB(int x, int y);
int cntBW(int x, int y);

int main() 
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, m;
	cin >> n >> m;
	cin.ignore();

	for (int i = 0; i < n; ++i)
		getline(cin, board[i]);

	int min_val = 65;

	for (int i = 0; i + 8 <= n; ++i)
	{
		for (int j = 0; j + 8 <= m; ++j)
		{
			int temp = min(cntWB(i, j), cntBW(i, j));
			if (temp < min_val)
				min_val = temp;
		}
	}

	cout << min_val;
	return 0;
}

int cntWB(int x, int y)
{
	int cnt = 0;
	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			if (board[x + i][y + j] != WB[i][j])
				++cnt;
		}
	}
	return cnt;
}

int cntBW(int x, int y)
{
	int cnt = 0;
	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			if (board[x + i][y + j] != BW[i][j])
				++cnt;
		}
	}
	return cnt;
}