#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int wall = section[0];
    
    for(int i = 0; i<section.size(); ++i)
    {
        if(section[i] < wall + m) 
            continue;
        else
        {
            wall = section[i];
            ++answer;
        }
    }
    ++answer;
    
    return answer;
}