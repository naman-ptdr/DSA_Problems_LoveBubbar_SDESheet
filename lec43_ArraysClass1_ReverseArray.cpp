// #include<iostream>
// using namespace std;

// int main(){
//     int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
//     int n;
//     int size = 8;
//     int start = 0;
//     int end = size-1;


//     while(start<=end){
//         // n = arr[start];
//         // arr[start] = arr[end]; 
//         // arr[end] = n;
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
// return 0;
// }



#include<iostream>
using namespace std;

int main(){
    int arr[] = {10, 20, 30, 40, 50, 60 ,70, 80, 90};
    int size = 9;
    for(int i=0; i<= size/2; i++){
        swap(arr[i],arr[size-1-i]);
    }
   for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
return 0;
}