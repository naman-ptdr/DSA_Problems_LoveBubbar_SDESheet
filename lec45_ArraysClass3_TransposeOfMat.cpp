#include<iostream>
using namespace std;
void printMat(int arr[3][3], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
//   -----------FOR SQUARE MATRIX---------------


// void transpose(int arr[][3], int row, int col){
//     for(int i=0; i<row; i++){
//         for(int j=i; j<col; j++){
//             swap(arr[i][j], arr[j][i]);
//         }
//     }
// }

// ----------FOR OTHER MATRIX---------------
void transpose(int arr[][3], int row, int col, int trr[][3]){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            trr[i][j] = arr[j][i];
        }
    }
}

int main(){
    int arr[3][3];
    int row=3, col=3;
    cout<<"Enter the Elements of a Matrix : "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Matrix will be : "<<endl;
    printMat(arr, row, col);

    int trr[4][3];
    transpose(arr, row, col, trr);
    cout<<"Transpose of Matrix will be : "<<endl;
    printMat(trr, row, col);
    
return 0;
}