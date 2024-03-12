#include <string>
#include <vector>

using namespace std;

int count(long long a){ //626331 입력 케이스를 위해 long long 으로 바꿈.. 자료형 범위 초과한다고함
    int c=0;
  
    while(a!=1){
        if(c==500) return -1;
        if(a%2==0)
        {
            a=a/2;
            c++;
        }
        else 
        {
            a=(a*3)+1;
            c++;
        }
    }
    return c;
}
    

int solution(int num) {
    int answer = 0;
    if (num==1) 
        return 0;
    
    return count(num);
}