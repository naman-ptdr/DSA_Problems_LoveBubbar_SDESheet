#include<iostream>
#include<climits>
using namespace std;

void printRSum(int arr[][3], int row, int col){
    for(int i=0; i<row; i++){
        int sum = 0; 
        for(int j=0; j<col; j++){
            sum += arr[i][j];
        }
        cout<<"Sum of Row "<<i+1<<" is "<<sum<<endl;
    }
}

void printCSum(int arr[][3], int row, int col){
    for(int i=0; i<row; i++){
        int sum = 0; 
        for(int j=0; j<col; j++){
            sum += arr[j][i];
        }
        cout<<"Sum of Column "<<i+1<<" is "<<sum<<endl;
    }
}

bool findKey(int arr[][3], int row, int col, int key){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]==key){
                return true;
            }
        }
    }
    return false;
}

int maxElement(int arr[][3], int row, int col){
    int max = INT_MIN;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(max<arr[i][j]){
                max = arr[i][j];
            }
        }
    }
    return max;
}

int minElement(int arr[][3], int row, int col){
    int min = INT_MAX;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(min>arr[i][j]){
                min = arr[i][j];
            }
        }
    }
    return min;
}


int main(){
    int arr[3][3];
    int row = 3, col = 3;
    int key;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Print Row - Wise Sum"<<endl;
    printRSum(arr, row, col);
    cout<<"Print Column - Wise Sum"<<endl;
    printCSum(arr, row, col);

    cout<<"Enter the key value U want to search"<<endl;
    cin>>key;
    bool result = findKey(arr, row, col, key);
    if(result){
        cout<<"Element is Present "<<endl;
    }else{
        cout<<"Element is not Present "<<endl;
    }

    int max = maxElement(arr, row, col);
    cout<<"Maximum Number will be : "<<max<<endl;

    int min = minElement(arr, row, col);
    cout<<"Minimum Number will be : "<<min<<endl;


return 0;
}