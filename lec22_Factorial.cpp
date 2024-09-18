#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter any Intiger whose factorial U want to know : ";
    cin>>n;
    int fact = 1; 
    for(int i=1; i<=n; i++){
        fact *= i;
    }
    cout<<"Factorial Of "<<n<< " is "<<fact;
return 0;
}