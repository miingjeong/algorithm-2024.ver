#include <string>
#include <vector>

using namespace std;
int cnt0=0;
int cnt1=0;

bool isSame(vector<vector<int>>& arr, int x, int y, int size){
    int val=arr[x][y];
    for(int i=x; i<x+size; i++){
        for(int j=y; j< y+size; j++){
            if(arr[i][j]!=val)
                return false;
        }
        
    }
    return true;
}

void compress(vector<vector<int>>& arr, int x, int y, int size){
    if(isSame(arr,x,y,size)){
        if(arr[x][y]==0) cnt0++;
        else cnt1++;
        return;
    }
    
    int half=size/2;
    compress(arr, x, y, half);
    compress(arr, x+half, y, half);
    compress(arr, x, y+half, half);
    compress(arr, x+half, y+half, half);
}

vector<int> solution(vector<vector<int>> arr) {
    vector<int> answer;
    int size=arr.size();
 
    compress(arr,0,0,size);
    return {cnt0, cnt1};
    
}