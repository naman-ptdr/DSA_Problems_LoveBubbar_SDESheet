#include<bits/stdc++.h>
using namespace std;

    bool isSafe(int x, int y, int row, int col, vector<vector<int>>& arr, vector<vector<bool>>& vis){
        if((x>=0&&x<row && y>=0 && y<col) && (arr[x][y]==1) && (!vis[x][y])){
            return true;
        }else{
            return false;
        }
    }
    void solveMaze(vector<vector<int>>& arr, int row, int col, int i, int j, vector<vector<bool>>& vis, vector<string>& path, string output){
        // base case
        if(i == row-1 && j==col-1){
            path.push_back(output);
            return ;
        }
        // down i+1, j
        if(isSafe(i+1, j, row, col, arr, vis)){
            vis[i+1][j] = true;
            solveMaze(arr, row, col, i+1, j, vis, path, output+ "D");
            // backtrack
            vis[i+1][j] = false;
        }
        // left i, j-1
        if(isSafe(i, j-1, row, col, arr, vis)){
            vis[i][j-1] = true;
            solveMaze(arr, row, col, i, j-1, vis, path, output+ "L");
            // backtrack
            vis[i][j-1] = false;
        }
        // reght i, j+1
        if(isSafe(i, j+1, row, col, arr, vis)){
            vis[i][j+1] = true;
            solveMaze(arr, row, col, i, j+1, vis, path, output+ "R");
            // backtrack
            vis[i][j+1] = false;
        }
        // up i-1, j
        if(isSafe(i-1, j, row, col, arr, vis)){
            vis[i-1][j] = true;
            solveMaze(arr, row, col, i-1, j, vis, path, output+ "U");
            // backtrack
            vis[i-1][j] = false;
        }
    }

int main(){
    vector<vector<int>> maze = {{1, 0, 0}, {1, 1, 0}, {1, 1, 1}};
    int row = maze.size();
    int col = maze[0].size();
    vector<vector<bool>> vis(row, vector<bool>(col, false));
    vis[0][0] = true;
    vector<string> path;
    string output = "";
    solveMaze(maze, row, col, 0, 0, vis, path, output);
    for(auto it : path){
        cout<<it<<endl;
    }
    return 0;
}