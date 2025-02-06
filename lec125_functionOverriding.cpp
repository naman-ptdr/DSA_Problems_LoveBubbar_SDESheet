#include<iostream>
using namespace std;

class Animal{
    // base class
    public:
    // base function
    void speak(){
        cout<<"speaking....."<<endl;
    }
};
class Dog : public Animal{
    // Derived class
    public:
    // override
    void speak(){
        cout<<"barking....."<<endl;
    }
};
int main(){
    Animal a;
    a.speak();
    Dog d;
    d.speak();
return 0;
}