#include<iostream>
using namespace std;
class Animal{
    public:
    Animal(){
        cout<<"Inside animal constructor"<<endl;
    }
    virtual void speak(){
        cout<<"Speaking...."<<endl;
    }
};
class Dog : public Animal{
    public:
    Dog(){
        cout<<"Inside dog constructor"<<endl;
    }
    void speak(){
        cout<<"Barking...."<<endl;
    }
};
int main(){
    // Animal* a = new Animal();
    // Dog* a = new Dog();
    Animal* a = new Dog();
    // Dog* a = (Dog*) new Animal();
return 0;
}