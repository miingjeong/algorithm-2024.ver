#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    int i=1;
    while(answer<=n){
        answer=answer*i;
        i++;
        
    }
    answer=i-2;
        
    return answer;
}