#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    int cnt=0;
    for(int i=0; i< my_string.size(); i++)
    {
        if (my_string[i]!=' '){
           cnt++;
            continue;
        }
        else{
            answer.push_back(my_string.substr(i-cnt, cnt));
            cnt=0;
        }
    }
    
    answer.push_back(my_string.substr( my_string.size()-cnt, cnt));
    return answer;
}