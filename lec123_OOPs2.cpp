#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    int age;
    string name;

    void sleep(){
        cout<<"Sleep"<<endl;
    }
    void eat(){
        cout<<"Eat"<<endl;
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
return 0;
}