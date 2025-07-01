#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min=arr[0];
    
    if (arr.size() == 1) answer.push_back(-1);
    
    for(int i=0; i< arr.size(); i++){
        if (min >= arr[i])
            min=arr[i];
    }
    
    for (int j=0; j< arr.size(); j++){
        if (arr[j]==min)
            continue;
        answer.push_back(arr[j]);
    }
    
    return answer;
}