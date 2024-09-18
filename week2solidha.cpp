#include<iostream>
using namespace std;
int main(){
    int n = 5;
    for(int i=0; i<(2*n)-1; i++){
        int con = 0;
        if(i<n){
            con = i;
        }
        else{
            con = n-(i%n) - 2;
        }
        for(int j=0; j<= con; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}