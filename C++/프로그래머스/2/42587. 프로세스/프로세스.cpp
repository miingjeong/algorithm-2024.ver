#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int solution(vector<int> priorities, int location) {    
    queue<int> myqueue;
    for(const auto& a : priorities) myqueue.push(a);
    sort(priorities.begin(), priorities.end(), greater<int>());
    int answer = 0;
    
    while(true){
        if(myqueue.front() == priorities[0]){
            answer++;
            myqueue.pop();
            priorities.erase(priorities.begin());
            if(location == 0) return answer;
            else location--;
        }
        else{
            myqueue.push(myqueue.front());
            myqueue.pop();
            location--;
            if(location < 0) location = myqueue.size() - 1;
        }
    }
    return answer;
}