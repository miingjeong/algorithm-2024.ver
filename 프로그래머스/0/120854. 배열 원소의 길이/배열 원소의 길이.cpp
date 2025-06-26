#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<string> strlist) {
    vector<int> answer;
    
    for (auto s : strlist) {
        int cnt=0;
        {
            for(int i=0; i<s.size(); i++)
                cnt++;
        }
        answer.push_back(cnt);
         
    }
   
    return answer;
}