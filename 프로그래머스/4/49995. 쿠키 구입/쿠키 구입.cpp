#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> cookie) {
    int answer = 0;
    
    int n=cookie.size();
    
    for(int m=0; m<n-1; m++){
        int left=m;
        int right=m+1;
        int left_sum=cookie[left];
        int right_sum=cookie[right];
        
        while(left >=0 && right < n){
            if (left_sum==right_sum)
                answer=max(answer, left_sum);
            
            if (left_sum <= right_sum){
                left--;
                if(left >=0)
                    left_sum+=cookie[left];
            }
            else {
                right++;
                if (right< n)
                    right_sum+=cookie[right];
                 
          }
        }
    }
    return answer;
}