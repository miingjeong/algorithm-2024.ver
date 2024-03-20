#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> vec;
    
    while(n>0){
        
        vec.push_back(n%3);
        n=n/3;
    }
    int mul=1;
    for(int i=vec.size()-1; i>=0 ; i--){
        answer=answer+vec[i]*mul;
        mul=mul*3;
    }
    
    return answer;
}