#include<iostream>
#include<cassert>
using namespace std;
int main(){
    int n;
    cin>>n;
    assert(n<=9);
    // if(n>9){
    //     cout<<"Enter value less then or equal to 9 ";
    //     return 0;
    // }
    for(int i=0; i<n; i++){
        int start_num_in = 8-i;
        int num = i+1;
        int count_num = num;
        for(int j=0; j<17; j++){
            if(j==start_num_in && count_num>0){
                cout<<num;
                start_num_in += 2;
                count_num--;
            }else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}