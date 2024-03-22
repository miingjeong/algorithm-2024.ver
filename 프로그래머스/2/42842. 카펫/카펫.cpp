#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    
    int sum=brown+yellow;
    for(int i=sum; i >= sum/i; i--){
        if(sum%i==0){
            int big=i, small=sum/i;
            if((big-2)*(small-2)==yellow){
               answer.push_back(big);
                answer.push_back(small);
            }
            
        }
    }
    
    return answer;
}