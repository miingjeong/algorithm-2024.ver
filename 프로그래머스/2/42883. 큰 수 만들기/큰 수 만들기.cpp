#include <string>
#include <vector>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    vector<char> stk;
    //비어있지 않고, k 가 0 보다 크고 , 이미 들어가있는게 지금꺼보다 작다면,
    for (char num : number){
        while (!stk.empty() && k > 0 && stk.back() < num ){
            stk.pop_back();
            k--;
        }
        stk.push_back(num);
    }
    while(k--){
        stk.pop_back();
    }
    
    answer=string(stk.begin(), stk.end());
    
    
    return answer;
}