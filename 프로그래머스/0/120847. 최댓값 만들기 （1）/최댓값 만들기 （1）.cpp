#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    for(int i = 0; i< numbers.size()-1;++i)
    {
        for(int j = i+1; j<numbers.size();++j)
        {
            int num = numbers[i]*numbers[j];
            if(answer < num)
                answer = num;
        }
    }
    return answer;
}