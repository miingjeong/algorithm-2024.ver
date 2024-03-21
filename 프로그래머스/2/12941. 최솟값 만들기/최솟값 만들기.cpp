#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;
    //A를 정렬 안했네....
    sort(A.begin(), A.end(), greater<int>());
   sort(B.begin(), B.end());

    for(int i=0; i<A.size(); i++)
    {
        answer+=A[i]*B[i];
    }

    return answer;
}