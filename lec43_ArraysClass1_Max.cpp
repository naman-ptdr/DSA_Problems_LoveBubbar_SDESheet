#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {2, 4, 1, 6, 8, 9, 120};
    int size = 7;
    int max = INT_MIN;
    for(int i=1; i<size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<"The maximum number will be "<<max;
return 0;
}