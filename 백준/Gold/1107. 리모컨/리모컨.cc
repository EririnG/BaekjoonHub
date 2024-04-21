#include <bits/stdc++.h>
using namespace std;
int n,btn_num, ans;
bool crash[11];
string temp = "";

bool check(int n)
{
    string str_n = to_string(n);
    for (int i = 0; i < str_n.length(); ++i)
    {
        if (crash[str_n[i] - '0'] == true)
            return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n >> btn_num;
    int ch = 100;

    for (int i = 0; i < btn_num; ++i)
    {
        int tmp;
        cin >> tmp;
        crash[tmp] = true;
    }
    
    int cnt = abs(ch - n);

    for (int i = 0; i < 1000000; ++i)
    {
        if (check(i) == true)
        {
            int se_cnt = abs(n - i) + to_string(i).length();
            cnt = min(cnt, se_cnt);
        }
    
    }
    cout << cnt;
}