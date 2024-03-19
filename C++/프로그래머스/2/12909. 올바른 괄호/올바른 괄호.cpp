#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int left,right=0;

    if(s[0]==')' || s[s.size()-1]=='(') return false;
    
    for(int i=0; i<s.size(); i++)
    {
        if (s[i]=='(')
            left++;
        else if (s[i]==')')
            right++;
       if (s=="())"){
           return false;
           break;}
    }
    if (left==right)
        return true;
  //  else if (left>right)
        //return false;

    return answer;
}