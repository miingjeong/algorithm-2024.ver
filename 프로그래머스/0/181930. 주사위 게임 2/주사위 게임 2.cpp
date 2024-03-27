#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int c) {
    int answer = 0;
    
    if (a==b && b==c) //(a==b==c 이건 아니지...)
        answer= 27*a*a*a*a*a*a;
    else if ((a==b && b!=c) ||(a==c&& c!=b) || (b==c && a!=b) )
        answer=(a+b+c)*(a*a+b*b+c*c);
    else
        answer=(a+b+c);
    return answer;
}