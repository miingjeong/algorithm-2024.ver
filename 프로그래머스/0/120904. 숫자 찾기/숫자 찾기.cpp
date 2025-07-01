#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = -1;
    string s=to_string(num);
    char target=k+'0';
    for(int i=0; i<s.size(); i++)
    {
        if (s[i]==target){
            return answer=i+1;
    }
    }
    return answer;
}