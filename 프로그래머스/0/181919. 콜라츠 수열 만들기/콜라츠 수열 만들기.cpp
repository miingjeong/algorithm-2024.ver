#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    
    while(n!=1){
        answer.push_back(n);
        if (n %2==0){
            n=n/2;
            continue;
        }
        
        if ( n%2==1){
            n=(3*n)+1;
             continue;
        }
    }
    
    answer.push_back(1);
    return answer;
}