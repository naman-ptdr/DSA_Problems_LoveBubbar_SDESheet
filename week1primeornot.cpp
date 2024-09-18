#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter any intiger for cheacking prime or not : ";
    cin>>n;
    for(int i=2; i<n; i++){
       if(n%i==0){
        cout<<"Given intiger is Not Prime.";
        break;
       }
       else{
        cout<<"Given intiger is Prime.";
        break;
       }
    }
    if(n==2){
        cout<<"Given intiger is Prime.";
    }
return 0;
}