#include<iostream>
using namespace std;
class abc{
    public:
    int x;
    int *y;

    abc(int _x, int _y) : x(_x), y(new int(_y)){

    }
    void print() const{
        printf("X : %d \nPTR Y : %p\nContent of Y (*y) : %d\n", x, y, *y);
    }

};
int main(){
    abc a(1, 2);
    cout<<"Printing a"<<endl;
    a.print();

    abc b = a;   //Call copy constructer
    cout<<"Printing b"<<endl;
    b.print();

    *b.y = 20;
    cout<<"Printing b"<<endl;
    b.print();

    cout<<"Printing a"<<endl;
    a.print();
return 0;
}