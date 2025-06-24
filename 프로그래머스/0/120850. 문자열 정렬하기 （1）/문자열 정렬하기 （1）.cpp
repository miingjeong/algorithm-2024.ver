#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    int cnt=0;
    for(int i=0; i< my_string.size(); i++)
    {
        if (my_string[i]>='a' && my_string[i]<='z')
            cnt++;
        else
            answer.push_back(my_string[i]-48);
            
    }
    sort(answer.begin(), answer.end());
    return answer;
}