#include<iostream>
using namespace std;
float circle_area(int r){
    return r*r*3.14;
}
int main(){
    int r;
    cin>>r;
    float area = circle_area(r);
    cout<<"Area of circle : " <<area;
    return 0;
}