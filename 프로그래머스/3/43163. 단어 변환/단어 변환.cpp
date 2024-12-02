#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool visited[51];
int answer = 50;

void dfs(string begin, string target, vector<string> words, int num)
{
    if(answer <= num)
        return;
    
    if(begin == target)
    {
        answer = min(answer,num);
        return;
    }
    
    for(int i = 0; i<words.size(); ++i)
    {
        int check = 0;
        for(int j = 0; j<words[i].length(); ++j)
        {
            if(begin[j] != words[i][j])
            {
                check++;
            }    
        }
        if(check == 1 && !visited[i])
        {
            visited[i] = true;
            dfs(words[i], target, words, num+1);
            visited[i] = false;
        }         
    }

    
}

int solution(string begin, string target, vector<string> words) {
    auto it = find(words.begin(),words.end(),target);
    if(it == words.end())
    {
        answer = 0;
        return answer;
    }
    dfs(begin, target, words, 0);
    return answer;
}