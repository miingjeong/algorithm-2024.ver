#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    
    for (int i=0; i<myString.size(); i++)
    {
        if ('A' <= myString[i] && myString[i]<='Z')
            answer.push_back(myString[i]+32);
       
        else
            answer.push_back(myString[i]);
        
    }
    return answer;
}