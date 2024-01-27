#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<numeric>

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    vector<int> coin(N);
    int result = 0;
    int answer = 0;
    for (int i = 0; i < N; ++i)
    {
        cin >> coin[i];
    }
    sort(coin.begin(), coin.end(), greater<>());

    for (int i = 0; i < size(coin); ++i)
    {
        if (K < coin[i]);
        else
        {
            result = K / coin[i];
            K -= coin[i] * result;
            answer += result;
        }
    }

    cout << answer;


    return 0;
}