#include<iostream>
using namespace std;

int main(){
    int n; 
    cout<<"Enter the value of N : ";
    cin>>n;
    cout<<"2\t";
    for(int i=3; i<=n; i++){
        for(int j=2; j<i; j++){
            if(i%j!=0){
                cout<<i<<"\t";
                break;
            }else{
                break;
            }
        }
    }
return 0;
}