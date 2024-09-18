#include<iostream>
using namespace std;

int main(){
    int arr[8]={1,0,0,1,1,1,1,0};
    int size = 8;
    int ones = 0, zeros = 0;
    for(int i=0; i<size; i++){
        if(arr[i]==0){
            zeros++;
        }else{
            ones++;
        }
    }
    cout<<"1's occured at "<<ones<<" Times"<<endl;
    cout<<"0's occured at "<<zeros<<" Times"<<endl;
return 0;
}