#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int mk_a, mk_b, mk_c, mk_d, ms_a, ms_b, ms_c, ms_d;
	int mk_sum, ms_sum;
	cin >> mk_a >> mk_b >> mk_c >> mk_d, '\n';
	cin >> ms_a >> ms_b >> ms_c >> ms_d, '\n';
	mk_sum = mk_a + mk_b + mk_c + mk_d;
	ms_sum = ms_a + ms_b + ms_c + ms_d;
	if (mk_sum > ms_sum)
		cout << mk_sum;
	else
		cout << ms_sum;
	
	return 0;
}
