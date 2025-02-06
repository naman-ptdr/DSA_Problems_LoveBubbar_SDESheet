#include<iostream>
using namespace std;
class Animal{
    public:
    virtual void speak(){
        cout<<"Speaking....";
    }
};
class Dog : public Animal{
    public:
    void speak(){
        cout<<"Barking....";
    }
};
int main(){
    Animal* a = new Animal();
    a->speak();
    Dog* b = new Dog();
    b->speak();
    // upcasting

    Animal* c = new Dog();
    c->speak();                   //------- output -----Barking....

// if virtual keyword is not at their in Animal function then pointer type class which is animal , its functin is called
return 0;
}