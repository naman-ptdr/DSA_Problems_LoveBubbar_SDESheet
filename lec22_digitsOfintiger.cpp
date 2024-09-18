#include<iostream>
using namespace std;

int main(){
    int n, digit;
    cin>>n;
    do{
        digit = n%10;
        cout<<digit<<endl;
        n = n/10;
    }
    while(n!=0);
return 0;
}