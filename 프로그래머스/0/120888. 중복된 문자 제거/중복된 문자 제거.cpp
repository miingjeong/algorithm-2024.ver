#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for(int i=0; i<my_string.size(); i++ ){
        if ( answer.find(my_string[i])!=string::npos)
            continue;
        answer.push_back(my_string[i]);
    
    }
    return answer;
}