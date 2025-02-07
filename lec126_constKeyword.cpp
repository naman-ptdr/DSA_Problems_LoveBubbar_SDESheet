#include<iostream>
using namespace std;

int main(){
    const int x=5;
    // x = 10;   Not possible
    cout<<x<<endl;

    // 2. const with pointers
    int *a = new int;
    *a = 2;
    cout<<*a<<endl;
    int b = 5;
    a = &b;
    cout<<*a<<endl;
return 0;
}