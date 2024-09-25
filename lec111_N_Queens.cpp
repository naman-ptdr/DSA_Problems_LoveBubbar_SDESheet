// #include<bits/stdc++.h>
// using namespace std;


// // brute force
// void printSolution(vector<vector<char>>& board, int n){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout<<board[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl<<endl;
// }

// bool isSafe(int row, int col, vector<vector<char>>& board, int n){
//     // check that kya current cell par rakh sakta ya nahi
//     // check three direction that their is queen or not
//     // upper left digonal , left, bottom left digonal
//     int i=row;
//     int j=col;
//     // check left side of same row 
//     while(j>=0){
//         if(board[i][j]=='Q') return false;
//         j--;
//     }
//     // check upper left diagonal
//     i = row;
//     j = col;
//     while(i>=0 && j>=0){
//         if(board[i][j]=='Q')return false;
//         i--;
//         j--;
//     }
//     // check bottom left diagonal
//     i = row;
//     j = col;
//     while(i<n && j>=0){
//         if(board[i][j]=='Q') return false;
//         i++;
//         j--;
//     }
//     // kahi bhi queen nahi mili
//     return true;
// }
// void solve(vector<vector<char>>& board, int col, int n){
//     // base case
//     if(col>=n){
//         printSolution(board, n);
//         return ;
//     }

//     // solve one case then recurssion will handel
//     for(int row=0; row<n; row++){
//         if(isSafe(row, col, board, n)){
//             // rakh do
//             board[row][col] = 'Q';
//             // recurssion will handel
//             solve(board, col+1, n);
//             // backtracking
//             board[row][col] = '.';

//         }
//     }
// }
// int main(){
//     int n = 4;
//     vector<vector<char>> board(n, vector<char>(n, '.'));
//     int col = 0;
//     solve(board, col, n);
//     return 0;
// }





#include<bits/stdc++.h>
using namespace std;

unordered_map<int, bool> rowCheck;
unordered_map<int, bool> upperLeftDiaCheck;
unordered_map<int, bool> bottomLeftDiaCheck;


// brute force
void printSolution(vector<vector<char>>& board, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}

bool isSafe(int row, int col, vector<vector<char>>& board, int n){

    if(rowCheck[row] || upperLeftDiaCheck[(n-1)+col-row] || bottomLeftDiaCheck[row+col]) return false;
    
    return true;
}
void solve(vector<vector<char>>& board, int col, int n){
    // base case
    if(col>=n){
        printSolution(board, n);
        return ;
    }

    // solve one case then recurssion will handel
    for(int row=0; row<n; row++){
        if(isSafe(row, col, board, n)){

            // one case 
            board[row][col] = 'Q';
            rowCheck[row] = true;
            upperLeftDiaCheck[(n-1)+col-row] = true;
            bottomLeftDiaCheck[row+col] = true;

            // recurssion will handel

            solve(board, col+1, n);

            // backtracking

            board[row][col] = '.';
            rowCheck[row] = false;
            upperLeftDiaCheck[(n-1)+col-row] = false;
            bottomLeftDiaCheck[row+col] = false;

        }
    }
}
int main(){
    int n = 4;
    vector<vector<char>> board(n, vector<char>(n, '.'));
    int col = 0;
    solve(board, col, n);
    return 0;
}
