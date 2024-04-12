#include <bits/stdc++.h>
using namespace std;

int n;
string m;
string ans;
int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> m >> n;
    list<char> li(m.begin(), m.end());
    auto cursor = li.end();

    for (int i = 0; i < n; ++i)
    {
        char cmd, c;
        cin >> cmd;
        if ('L' == cmd)
        {
            if (cursor != li.begin())
                --cursor;
        }
        else if ('D' == cmd)
        {
            if (cursor != li.end())
                ++cursor;
        }
        else if ('P' == cmd)
        {
            cin >> c;
            li.insert(cursor,c);
        }
        else if ('B' == cmd)
        {
            if (cursor != li.begin())
            {
                --cursor;
                cursor = li.erase(cursor);
            }
        }
    }
    for (cursor = li.begin(); cursor != li.end(); ++cursor)
        cout << *cursor;
}
