#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    
    sort(citations.begin(), citations.end(), greater<int>());
    
    for(int i=0; i<citations.size(); i++)
    {
        if(citations[i]>=i+1)
            answer=i+1;
    }
    return answer;
}
/*주어진 citations 벡터를 내림차순으로 정렬한다.
벡터 원소의 값과 i+1의 값을 비교하며 i+1이 citations[i]과 작거나 같아지는 시점을 찾는다.*/
