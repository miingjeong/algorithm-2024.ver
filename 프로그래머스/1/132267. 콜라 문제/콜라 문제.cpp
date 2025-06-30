#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    int moc=0;
    int sum=0;
    while(n >=a){
        moc=n/a;
        n=n-(a*moc)+(b*moc);
        sum=sum+moc*b;
    }
    return sum;
}