#include<vector>
#include<algorithm>
#include<cstring>
#include<queue>
using namespace std;

bool vst[104][104];
int dist[104][104];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,-1,1};
queue<pair<int, int>> q;
int solution(vector<vector<int> > m)
{
    int answer = 0;
    int ns=m.size();
    int ms=m[0].size();
    memset(dist,-1, sizeof(dist));
    q.push({0,0});
    vst[0][0]=1;
    dist[0][0]=1;
    
    while(!q.empty()){
        auto cur=q.front(); q.pop();
        if(cur.first==ns-1 && cur.second==ms-1){
            return dist[ns-1][ms-1];
        }
        for(int dir=0; dir<4; dir++){
            int nx=cur.first+dx[dir];
            int ny=cur.second+dy[dir];
            if(nx<0 || ny <0 || nx >=ns || ny>=ms)continue;
            if(vst[nx][ny] || m[nx][ny]==0 || dist[nx][ny]!=-1) continue;
            q.push({nx,ny});
            vst[nx][ny];
            dist[nx][ny]=dist[cur.first][cur.second]+1;
        }
    }
    if(dist[ns-1][ms-1]==-1) answer=-1;
    else answer=dist[ns-1][ms-1];
    
    
    
    return answer;
}