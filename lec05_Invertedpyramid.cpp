#include<iostream>
using namespace std;

int main(){
    for(int row=0; row<6; row++){
        for(int col=0; col<row+1; col++){
            cout<<" ";
        }for(int i=0; i<6-row; i++){
            cout<<"* ";
        }
        cout<<endl;
    }
return 0;
}