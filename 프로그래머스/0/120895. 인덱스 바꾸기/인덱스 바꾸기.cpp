#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int num1, int num2) {
    string answer = my_string;
    char cmp= my_string[num2];
    my_string[num2]=my_string[num1];
    my_string[num1]=cmp;
    
  
        
    
    return my_string;
}