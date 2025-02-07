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
    int getX() const{
        // NOT POSSIBLE  --- x = 5;
        return x;                         //POSSIBLE--- //int getX(){ x = 5;  return x;}
    }
    void setX(int x){
        this->x = x;
    }
    int getY() const{
        int z = 20;
        // y = &z;        ---NOT POSSIBLE
        return *y;
    }
    void setY(int _val){
        *y = _val;
    }
};
int main(){
    abc a;
    cout<<a.getX()<<endl;
    cout<<a.getY()<<endl;
return 0;
}