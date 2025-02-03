#include<bits/stdc++.h>
using namespace std;
class Animal{

};
class Dog{
    // int num;  // ----4
    char a;       //  ----1
};
class Cat{
    int num;
    char b;
};
int main(){
    cout<<"Size of Empty class is : "<<sizeof(Animal)<<endl;
    cout<<"Size of Dog class is : "<< sizeof(Dog)<<endl;
    cout<<"Size of  Cat class is : "<< sizeof(Cat)<<endl;

    return 0;
}