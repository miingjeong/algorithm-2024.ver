#include <string>
#include <vector>
#include <algorithm>
#include <iostream>



using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> vec;
    string temp="";
    
    for(int i=0; i<s.size(); i++){
        
        if(s[i]==' '){
            vec.push_back(stoi(temp));
                temp=" ";
        }
        else
            temp+=s[i];
    }
    
    vec.push_back(stoi(temp));
    sort(vec.begin(), vec.end());
    
    answer=answer+to_string(vec[0])+ ' ' + to_string(vec[vec.size()-1]);
    
    
    
    return answer;
}