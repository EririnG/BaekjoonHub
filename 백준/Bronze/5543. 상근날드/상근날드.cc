#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int topburger, midburger, bottomburger, cola, sidar,ans;
	cin >> topburger >> midburger >> bottomburger >> cola >> sidar;

	if (topburger > midburger)
		if (midburger > bottomburger)
			ans = bottomburger;
		else
			ans = midburger;
	else
		if (topburger > bottomburger)
			ans = bottomburger;
		else
			ans = topburger;

	if (cola > sidar)
		ans += sidar;
	else
		ans += cola;

	cout << ans-50 ;
	

	return 0;
}
