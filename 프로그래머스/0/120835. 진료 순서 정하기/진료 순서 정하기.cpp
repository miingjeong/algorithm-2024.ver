#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    vector <int> tmp;
    // 정렬했을 때, 그것의 인덱스번호의 +1
    
    //원본은 유지를 해야댐
    
    for(int i :emergency ){
        tmp.push_back(i);
    }
    
    sort(tmp.begin(), tmp.end());
    for(int i=0; i< emergency.size(); i++){
        auto it= find(tmp.begin(), tmp.end(), emergency[i]);
        int idx = distance(tmp.begin(), it);
        answer.push_back(emergency.size() - idx);
    }
    
    
    return answer;
}