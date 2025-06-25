#include <string>
#include <vector>

using namespace std;

string solution(string cipher, int code) {
    string answer="";
    
    for(int i=1; i*code<= cipher.size(); i++){
        answer.push_back(cipher[i*code-1]);
    }
    return answer;
    
    
    /*for(int i=1; i < cipher.size(); i++){
        answer[i-1]=cipher[i*code-1];
        
    }
    return answer; */
}