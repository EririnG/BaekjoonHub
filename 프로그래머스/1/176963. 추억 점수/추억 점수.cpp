#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    for(int i = 0; i<photo.size(); ++i)
    {
        int num = 0;
        for(int j = 0; j<photo[i].size(); ++j)
        {
            if(photo[i][j] == name[i])
            {
                num += yearning[j];
            }
        }
        answer.push_back(num);
    }
        
    return answer;
}