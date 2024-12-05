#include<bits/stdc++.h>
using namespace std;

class Animal{
    // state or properties
    private:
    int weight = 20;
    public:
    int age;
    string name;

    // constructor   
    // default constructor
    Animal(){
        this->weight = 0;
        this->age = 0;
        this->name = "";
        cout<<"Constructor Called"<<endl;
    }

    // Parameterised Constructor
    Animal(int age){
        this->age = age;
        cout<<"Parameterised Constructor Called"<<endl;
    }

    Animal(int weight, int age, string name){
        this->weight = weight;
        this->age = age;
        this->name = name;
        cout<<"Parameterised Constructor Two Called"<<endl;
    }

    // Copy Constructor
    Animal(Animal &obj){
        this->age = obj.age;
        this->weight = obj.weight;
        this->name = obj.name;
        cout<<"Copy Constructor Called"<<endl;
    }
    // behavior
    void sleep(){
        cout<<"Sleep"<<endl;
    }
    void eat(){
        cout<<"Eat"<<endl;
    }
    void setWeight(int weight){
        this->weight = weight;
    }
    int getWeight(){
        return weight;
    }

    void print(){
        cout<<this->age<<" "<<this->weight<<" "<<this->name<<endl;
    }
    ~Animal(){
        cout<<"Inside distructor"<< endl;
    }
};
int main(){
    // Dynamic Memory
    Animal* suresh = new Animal;
    (*suresh).age = 15;
    (*suresh).name = "Billi";
    // alternate dynamic
    suresh->age = 18;
    suresh->name = "Kutta";

    suresh->eat();
    suresh->sleep();


    // parameterised Constructor calling
    // Animal* a = new Animal(100);
    // Animal* b = new Animal(20, 30, "Kutta");
    // Animal c = *b;     //c(*b)

    // Animal a;
    // a.age = 20;
    // a.setWeight(101);
    // a.name = "babbar";

    // Animal b = a;
    // a.print();
    // b.print();

    cout<<"a obj creation"<<endl;
    Animal a;
    a.age = 5;
    // default called distructor for static memory allocation
    cout<<"b obj creation"<<endl;
    Animal* b = new Animal();
    b->age = 12;
    // manually called distructor for dynamic allocation
    delete b;

return 0;
}