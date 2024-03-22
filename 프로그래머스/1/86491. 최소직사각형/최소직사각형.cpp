#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int height=0;
    int witdh=0;
    
    for(int i=0; i<sizes.size(); i++)
    {
        if (sizes[i][0]> sizes[i][1])
        {
            height=max(height, sizes[i][0]);
            witdh=max(witdh, sizes[i][1]);
        }
        else
        {
            height=max(height, sizes[i][1]);
            witdh=max(witdh, sizes[i][0]);
        }
    }
    answer=height*witdh;
    return answer;
}