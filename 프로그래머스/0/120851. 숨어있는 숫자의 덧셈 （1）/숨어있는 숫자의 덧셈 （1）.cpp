#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    for(int i=0; i<my_string.size(); i++ )
    {
        if ((my_string[i]>='a' && my_string[i]<='z') || (my_string[i]>='A' && my_string[i]<='Z'))
            continue;
        answer+=my_string[i]-'0';
    }
    return answer;
}