#include<iostream>
using namespace std;
int x = 2;
int main(){
    x = 4;
    int x = 20; // local to main function
    cout<<x<<endl;
    cout<<::x<<endl;  //accessing global with ::

return 0;
}