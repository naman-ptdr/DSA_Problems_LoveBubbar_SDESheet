// Daimond problem.

#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    int chemistry;
    A(){
        chemistry = 101;
    }
};
class B{
    public:
    int chemistry;
    B(){
        chemistry = 202;
    }
};
class C : public A, public B{
    public:
    int maths;
    C(){
        maths = 303;
    }
};

int main(){
    C obj;
    cout<<obj.A::chemistry <<" " <<obj.B::chemistry <<" "<< obj.maths<<endl;
return 0;
}