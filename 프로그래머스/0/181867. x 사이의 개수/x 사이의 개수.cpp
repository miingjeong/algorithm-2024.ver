#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    int cnt=0;
    for(int i=0; i<myString.size(); i++){
        if (myString[i]!='x'){
            cnt++;
        }
        else{
            answer.push_back(cnt);
            cnt=0;
        }
        
    }
    answer.push_back(cnt);
    return answer;
}