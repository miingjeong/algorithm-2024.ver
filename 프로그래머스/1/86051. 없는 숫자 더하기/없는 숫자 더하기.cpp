#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    
    for(int i=0; i< numbers.size(); i++)
        answer+=numbers[i];
    return 45-answer;
}

// 0-9 모두 더한 값은 45라는 알고 있는 정보도 활용하기!