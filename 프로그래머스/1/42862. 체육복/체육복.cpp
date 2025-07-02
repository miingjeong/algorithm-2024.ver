#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int cnt = n - lost.size(); // 체육복 있는 사람 수

    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());

    // 1. 여벌도 잃어버린 사람 제거
    for (int i = 0; i < lost.size(); ) {
        auto it = find(reserve.begin(), reserve.end(), lost[i]);
        if (it != reserve.end()) {
            reserve.erase(it);
            lost.erase(lost.begin() + i);
            cnt++; // 본인이 자기 여벌로 해결
        } else {
            i++;
        }
    }

    int po_lo = 0;
    int po_re = 0;

    // 2. 나머지 사람들끼리 빌려주기
    while (po_lo < lost.size() && po_re < reserve.size()) {
        if (abs(reserve[po_re] - lost[po_lo]) == 1) {
            cnt++;
            po_lo++;
            po_re++;
        } else if (reserve[po_re] < lost[po_lo] - 1) {
            po_re++;
        } else {
            po_lo++;
        }
    }

    return cnt;
}
