#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int M, N;
	int sum = 0, min = -1;
	int cnt = 0;
	cin >> M >> N;

	for (int i = M; i <= N; i++) {
		for (int div = 1; div <= i; div++) {
			if (i % div == 0)
				cnt++;
		}
		if (cnt == 2) {		
			if (min == -1)		
				min = i;
			sum += i;
		}
		cnt = 0;
	}
	if (min == -1)
		cout << -1 << '\n';
	else
		cout << sum << '\n' << min << '\n';

	return 0;
}
