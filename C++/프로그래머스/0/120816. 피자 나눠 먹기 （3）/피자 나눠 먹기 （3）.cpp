#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    int answer = 1;
    
    for(int i=1; i<n; i++)
    {
        if(slice*i>=n){
            answer=i;
            break;
        }
        answer++;
    }
        
    
    return answer;
}