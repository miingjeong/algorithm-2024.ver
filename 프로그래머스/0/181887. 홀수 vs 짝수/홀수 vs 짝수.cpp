#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int ho=0;
    int jak=0;
    
    for(int i=0; i<num_list.size(); i++)
    {
        if (i%2==1)
            ho+=num_list[i];
        else if (i%2==0)
            jak+=num_list[i];
    }
    
    answer=max(ho, jak);
    return answer;
}