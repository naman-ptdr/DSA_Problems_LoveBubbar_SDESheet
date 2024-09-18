#include<bits/stdc++.h>
using namespace std;

int partition(int* arr, int s, int e){
    // step1 : chose pivotElement
    int pivotInd = s;
    int pivotEle = arr[s];

    // step2 : find right position for pivot element and place it there
    int count = 0;
    for(int i=s+1; i<=e; i++){
        if(arr[i]<=pivotEle){
            count++;
        }
    }
    // jab main loop se bahar hua , tab mere pass pivot ki right position ka index ready h
    int rightIndex = s+count;
    swap(arr[pivotInd], arr[rightIndex]);
    pivotInd = rightIndex;

    // step3: left me chote and right mai bade
    int i = s;
    int j = e;

    while(i<pivotInd && j>pivotInd){
        while(arr[i]<=pivotEle){
            i++;
        }
        while(arr[j]>pivotEle){
            j--;
        }
        //  two case can be their
        // A-> you found the elements to swap
        // B-> no need to swap
        if(i<pivotInd && j>pivotInd){
            swap(arr[i], arr[j]);
        }
    }
    return pivotInd;
}

void quickSort(int* arr, int s, int e){
    // base case
    if(s>=e) return ;

    // partition logic, return pivotElement
    int p = partition(arr, s, e) ;

    // recursive calls
    // pivot element -> left
    quickSort(arr, s, p-1);
    // pivot element -> right
    quickSort(arr, p+1, e);

}
int main(){
    int arr[] = {2, 8, 3, 0, 1, 3, 2, 1, 9, 10};
    int n = 10;
    int s = 0, e = n-1;
    quickSort(arr, s, e);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}