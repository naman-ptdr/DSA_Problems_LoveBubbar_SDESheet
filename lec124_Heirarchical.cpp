#include<iostream>
using namespace std;
class Car{
    public: 
    string name;
    void speedUp(){
        cout<<"Speeding UP......"<<endl;
    }
};
class Scorpio : public Car{

};
class Fortuner : public Car{

};
int main(){
    Scorpio s11;
    cout<<"S11  ";
    s11.speedUp();
    Fortuner f11;
    cout<<"F11  ";
    f11.speedUp();

return 0;
}