#include<bits/stdc++.h>
using namespace std;

//    Striver at last

// ----------------------------------------------Bubbar-------------------------------------------//
void merge(int* arr, int s, int mid, int e){
    int len1 = mid-s+1;
    int len2 = e - mid;

    int* left = new int[len1];
    int* right = new int[len2];

    int k = s;
    for(int i=0; i<len1; i++){
        left[i] = arr[k];
        k++;
    }
    k = mid+1;
    for(int i=0; i<len2; i++){
        right[i] = arr[k];
        k++;
    }

    int lind = 0;         //left array index
    int rind = 0;       //right array index
    int mind = s;      // main array index

    while(lind<len1 && rind<len2){
        if(left[lind]<right[rind]){
            arr[mind++] = left[lind++];
        }else{
            arr[mind++] = right[rind++];
        }
    }

    while(lind<len1){
        arr[mind++] = left[lind++];
    }
    while(rind<len2){
        arr[mind++] = right[rind++];
    }

    //TODO delete left right array
}


void mergeSort(int* arr, int s, int e){
    // Base case
    if(s >= e) return ;

    int mid = s + (e-s)/2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);

    merge(arr, s, mid, e);
}
int main(){
    int arr[] = {38, 27, 43, 3, 9, 20};
    int n = 6;
    int s = 0;
    int e = n-1;
    mergeSort(arr, s, e);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}






// -------------------------------Striver----------------------------------------//


// void merge(vector<int>& arr, int l, int m, int h){
//     vector<int> temp;

//     int left = l;
//     int right = m+1;

//     while(left<=m && right<=h){
//         if(arr[left]<arr[right]){
//             temp.push_back(arr[left++]);
//         }else{
//             temp.push_back(arr[right++]);
//         }
//     }
//     while(left<=m){
//         temp.push_back(arr[left++]);
//     }
//     while(right<=h){
//         temp.push_back(arr[right++]);
//     }

//     for(int i=l; i<=h; i++){
//         arr[i] = temp[i-l];
//     }
// }

// void mergeSort(vector<int>& arr, int l, int h){
//     if(l>=h) return ;

//     //  mid index : 
//     int m = l + (h-l)/2;
//     mergeSort(arr, l, m);
//     mergeSort(arr, m+1, h);

//     // merge Sorted array : 
//     merge(arr, l, m, h);
// }

// int main(){
//     vector<int> arr = {38, 27, 43, 3, 9, 20};
//     int n = arr.size();
//     int l = 0;           // low
//     int h = n-1;        // high
    

//     mergeSort(arr, l, h);

//     //  Print array : 
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }