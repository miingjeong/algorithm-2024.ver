#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer =false;
    int sum=0;
    int y=0;
    y=x;
    //answer= (x % sum ==0? true: false);
    while (x>0)
    {
        sum=sum+x%10;
        
        x=x/10;
    }
    
  answer= (y % sum ==0? true: false);
  
    
    return answer;
}