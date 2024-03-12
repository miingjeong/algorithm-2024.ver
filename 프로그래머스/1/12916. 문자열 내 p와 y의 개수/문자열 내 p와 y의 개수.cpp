#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int Ycount=0;
    int Pcount=0;
    
    for(int i=0; i< s.size(); i++)
    {
        if(s[i]=='y' ||s[i]=='Y')
           Ycount++;
           
        if(s[i]=='P' ||s[i]=='p')
           Pcount++;          
           }
    
    if (Ycount==Pcount)  answer=true;
           else answer=false;


    return answer;
}