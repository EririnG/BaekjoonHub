#include <bits/stdc++.h>
using namespace std;

string str,rvstr;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> str;
	rvstr = str;
	reverse(rvstr.begin(),rvstr.end());
	
    if(str == rvstr) cout << 1 << " ";
    else cout << 0 << " ";
    
	return 0;
}
