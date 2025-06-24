#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    int answer = 0;
    int cnt=0;
    for (int i=0; i< is_prefix.size(); i++){
        if (my_string[i]==is_prefix[i]){
            cnt++;
        }
    }
    if (cnt==is_prefix.size())
        return answer=1;
    return answer;
}