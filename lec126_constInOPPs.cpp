#include<iostream>
using namespace std;
class abc{
    int x;
    int *y;
public:
    abc(){
        x = 0;
        y = new int(0);
    }
    // ctor : old style            ctor - constructor
    abc(int _x, int _y){
        x = _x;
        y = new int(_y);
    }
    // Initializtion list
    // abc(int _x, int _y) : x(_x), y(new int(_y)) {}
    int getX() const{
        // NOT POSSIBLE  --- x = 5;
        return x;                         //POSSIBLE--- //int getX(){ x = 5;  return x;}
    }
    void setX(int x){
        this->x = x;
    }
    int getY() const{
        // int z = 20;
        // y = &z;        ---NOT POSSIBLE
        return *y;
    }
    void setY(int _val){
        *y = _val;
    }
};
void printABC(const abc &b){
    cout<<"x : "<<b.getX()<<"  y: "<<b.getY()<<endl;
}
int main(){
    abc a;
    cout<<a.getX()<<endl;
    cout<<a.getY()<<endl;

    abc b(5, 6);
    printABC(b);

return 0;
}