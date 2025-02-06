#include<iostream>
using namespace std;
class Animal{
    public:
    virtual void speak(){
        cout<<"Speaking....";
    }
};
class Dog{
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

    // Animal* c = new Dog();
    // c->speak();                   ------- output -----Barking....

return 0;
}