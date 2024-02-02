#include <iostream>
#include <string>
using namespace std;

int main()
{
    int l, a, b, c, d;
    cin >> l;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    int korean = 0;
    int math = 0;

    if (0 < a % c)
    {
        korean = (a / c) + 1;
    }
    else
    {
        korean = (a / c);
    }


    if (0 < b % d)
    {
        math = (b / d) + 1;
    }
    else
    {
        math = (b / d);
    }
    int ans = max(korean, math);
    cout << l-ans;

    return 0;
}
