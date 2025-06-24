#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = -1;
    string s=to_string(num);
    char target=k+'0'; // 정수 k 를 문자로 변환...
    for(int i=0; i<s.size(); i++){
        if (target==s[i]) 
            return answer=i+1;
    }
        
    
    return answer;
}