#include <string>
#include <vector>

using namespace std;
int visited[200];
void DFS(int current_computer, int n,  vector< vector<int> > computers){
    visited[current_computer]=1;
    for(int i=0; i<n; i++){
        if(visited[i]==0 && computers[current_computer][i]==1 ){
            DFS(i, n , computers);
        }
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 1;    
    for(int i=0; i<n; i++)
    {
        if (visited[i]==0){ //아직 방문 안했으면
            DFS(i, n, computers);
            answer++;
        }
    }
    return answer-1;
}