#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
using namespace std;
/* 종류별 과일 갯수 버킷
우선순위 큐에다 정렬해서 넣고
k가 되기 전, 큐가 비기 전까지 
cnt+를 더하고 팝을 한갯수가 answer
*/
int solution(int k, vector<int> tangerine) {
    
    map <int, int> bucket;
    for(auto i : tangerine){
        bucket[i]++;
    }
    priority_queue<int> pq;
    for(auto i: bucket){
        pq.push(i.second);
    }
    int answer = 0 ;
    int cnt=0;
    while (!pq.empty() && cnt <k){
        cnt +=pq.top();
        answer++;
        pq.pop();
        
    }
    
    
  
    
    return answer;
}