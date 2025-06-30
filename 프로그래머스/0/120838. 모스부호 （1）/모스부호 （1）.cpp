#include <string>
#include <vector>
#include <map>
#include <sstream>
using namespace std;

string solution(string letter) {
    string answer = "";
    
    map <string, char> morse={
        {".-", 'a'},   {"-...", 'b'}, {"-.-.", 'c'}, {"-..", 'd'},  {".", 'e'},
        {"..-.", 'f'}, {"--.", 'g'},  {"....", 'h'}, {"..", 'i'},   {".---", 'j'},
        {"-.-", 'k'},  {".-..", 'l'}, {"--", 'm'},   {"-.", 'n'},   {"---", 'o'},
        {".--.", 'p'}, {"--.-", 'q'}, {".-.", 'r'},  {"...", 's'},  {"-", 't'},
        {"..-", 'u'},  {"...-", 'v'}, {".--", 'w'},  {"-..-", 'x'}, {"-.--", 'y'},
        {"--..", 'z'}
    };
    
    stringstream ss(letter);
    string word="";
    while(ss >> word){
        answer.push_back(morse[word]);
        
    }
    return answer;
}