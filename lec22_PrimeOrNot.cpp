#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter intiger to cheack prime or not : ";
    cin>>n;
    for(int i=2; i<n; i++){
        if(n%i!=0){
            cout<<"Prime";
            break;
        }else{
            cout<<"Not Prime";
            break;
        }
    }
    if(n==2){
        cout<<"Prime";
    }
return 0;
}