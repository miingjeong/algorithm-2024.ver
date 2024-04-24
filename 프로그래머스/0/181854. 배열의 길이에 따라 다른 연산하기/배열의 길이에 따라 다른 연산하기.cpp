#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    vector<int> answer;
    
    if ( arr.size()%2==1)
    {
        for(int i=0; i<arr.size(); i++)
        {
            answer.push_back(arr[i]+n);
            i++;
            answer.push_back(arr[i]);
        }answer.pop_back();
    }
    
    else
    {
        for(int i=0; i<arr.size(); i++)
        {
            answer.push_back(arr[i]);
            i++;
            answer.push_back(arr[i]+n);
        }
    }
        
    
    return answer;
}