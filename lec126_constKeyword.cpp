#include<iostream>
using namespace std;

int main(){
    const int x=5;
    // x = 10;   Not possible
    cout<<"x : "<<x<<endl;

    // 2. const with pointers

    int *a = new int;
    *a = 2;
    cout<<*a<<endl;
    int b = 5;
    a = &b;
    cout<<*a<<endl;

    //  CONST DATA BUT NON-CONST POINTER

    // const int *a = new int(5);          BOTH LINE 20 , 21 ARE RIGHT
    int const *a = new int(5);          
    // *a = 20;  data of pointer is not re-assign
    cout<<"a : "<<*a<<endl;
    // but pointer can be......
    int b = 20;
    a = &b;
    cout<<"a : "<<*a<<endl;

    //  CONST POINTER BUT NON-CONST DATA
    int *const c = new int(10);
    *c = 20;
    cout<<"c : "<<c<<endl;
    int d = 30;
    // c = &d;        NOT POSSIBLE

    // CONST DATA AND CONST POINTER
    const int *const e = new int(40);
    cout<<"e : "<<endl;
    // *e = 50;
    // int f = 50;     BOTH NOT POSSIBLE
    // e = &f;

return 0;
}