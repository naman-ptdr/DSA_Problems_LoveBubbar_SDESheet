#include<iostream>
using namespace std;

int main(){
    int n,fact=1;
    cout<<"Enter any intiger which factorial you want to know : ";
    cin>>n;
    for(int i=n; i>1;i--){
        fact*=i;
    }
    cout<<"factorial : "<<fact;
return 0;
}