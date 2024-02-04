#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int a, b, c, d, min,sec;
	cin >> a >> b >> c >> d ;

	sec = a + b + c + d;
	min = sec / 60;
	sec = sec % 60;

	cout << min << '\n' << sec;
	

	return 0;
}
