#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int answer = 0;
    
    while(order > 0){
        
       if (order % 10 == 3 ||order % 10 == 6 ||order % 10 == 9 ){
            answer++;
        }
        order =order/10;
    }
    
    
    return answer;
}