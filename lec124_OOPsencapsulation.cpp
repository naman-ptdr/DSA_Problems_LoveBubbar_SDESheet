// Encapsulation

#include<bits/stdc++.h>
using namespace std;

class Animal {
    private:
    int age;
    int weight;
    public:
    void eat(){
        cout<<"Eating Food"<<endl;
    }
    int getAge(){
        return age;
    }
    void setAge(int age){
        this->age = age;
    }
};
int main(){
    Animal *a = new Animal;
    a->setAge(25);
    cout<<"Age will be : "<<a->getAge()<<endl;

    return 0;
}