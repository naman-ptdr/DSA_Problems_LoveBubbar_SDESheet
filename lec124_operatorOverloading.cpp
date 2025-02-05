#include<iostream>
using namespace std;

class Parameter{
    public:
    int val;
    void operator+(Parameter & obj2){
        int value1 = this->val;
        int value2 = obj2.val;
        cout<<value1-value2;
    }
};
int main(){
    Parameter obj1, obj2;
    obj1.val = 7;
    obj2.val = 2;
    // obj1 + obj2 this should print their difference
    obj1 + obj2;

return 0;
}