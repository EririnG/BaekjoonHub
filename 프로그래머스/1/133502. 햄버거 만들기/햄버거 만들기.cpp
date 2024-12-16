#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    int i = 0;
    int idx[1000001];
    
    for(int num : ingredient)
    {
        idx[i] = num;
        
        if(i>=3)
        {
            if(idx[i-3] == 1 && idx[i-2] == 2 && idx[i-1] == 3 && idx[i] == 1)
            {
                answer++;
                i -= 4;
            }
        }
        ++i;
    }
    
    return answer;
}