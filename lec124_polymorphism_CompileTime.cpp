// function overloading     -------        Compile time polymorphism
#include<iostream>
using namespace std;

class Maths{
    public:
    int sum(int a, int b){
        cout<<"In first Signature : ";
        return a+b;
    }
    int sum(int a, int b, int c){
        cout<<"In second Signature : ";
        return a+b+c;
    }
    int sum(int a, float b){
        cout<<"In third Signature : ";
        return a+b;
    }
};
int main(){
    Maths obj;
    cout<<obj.sum(2, 5.7f);
return 0;
}