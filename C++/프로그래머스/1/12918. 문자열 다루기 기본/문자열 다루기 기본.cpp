#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    
    for(int i=0; i< s.size(); i++){
        if (s.size()==6 || 	s.size()== 4){
        
            if (s[i]!='0' && s[i]!='1' && s[i]!='2' && s[i]!='3' && s[i]!='4' && s[i]!='5'  && s[i]!='6' && s[i]!='7' && 
                s[i]!='8' && s[i]!='9') 
                return answer=false;
        }
        else
            answer=false;
     
    }
    return answer;
}