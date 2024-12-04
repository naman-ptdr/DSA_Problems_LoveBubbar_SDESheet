#include<iostream>
using namespace std;

class Animal{
    // state or properties
    private: 
    int weight;
    public:                           // by default private hoga   
    int age;
    string name;

    // behaviour
    void eat(){
        cout<<"Eating"<<endl;
    }
    void sleep(){
        cout<<"Sleeping"<<endl;
    }
    int getWeight(){
        return weight;
    }
    void setWeight(int w){
        weight = w;
    }
};

int main(){
    Animal shivam;
    shivam.age = 22;
    shivam.name = "Heero";
    cout<<"Age of Shivam is : "<< shivam.age <<endl;
    cout<<"Name of Shivam is : "<< shivam.name <<endl;
    // cout<<"weight of Shivam is : "<< shivam.weight <<endl;

    shivam.eat();
    shivam.sleep();

    // To access private members
    shivam.setWeight(101);
    cout<<"Weight : " << shivam.getWeight()<<endl;

return 0;
}