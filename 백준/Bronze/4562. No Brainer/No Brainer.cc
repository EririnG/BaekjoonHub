#include <iostream>
#define endl '\n'
using namespace std;

//백준 4562번 코드
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		if (a < b) { cout << "NO BRAINS" << endl; }
		else { cout << "MMM BRAINS" << endl; }
	}
}