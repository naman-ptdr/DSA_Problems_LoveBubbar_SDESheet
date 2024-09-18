#include<iostream>
using namespace std;

int main(){
    int x=1;
    for(int i=0; i<4; i++){
        for(int j=0; j<4-(i+1); j++){
            cout<<"  ";
        }
        for(int k=0; k<(2*i)+1; k++){
            if(k<((2*i)+2)/2){
                cout<<i+k+1<<" ";
            }else{
                cout<<i+k-x<<" ";
                x++;
            }
        }
        cout<<endl;
    }
return 0;
}