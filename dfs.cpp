#include<bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &grid,vector<vector<int>> &visited,
        int i, int j){
            int m=grid.size();
            int n=grid[0].size();
            visited[i][j]=1;
            vector<pair<int,int>> dir={{0,1},{1,0},{-1,0},{0,-1}};
            for(int i=0;i<dir.size();i++){
                int row=i+dir[i].first;
                int col=j+dir[i].second;
                if(row>=0 && col>=0 && row<m && col<n && !visted[row][col]){
                    dfs(grid,visited,row,col);
                }
            }
        }