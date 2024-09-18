#include<iostream>
using namespace std;

int main(){
    // for(int i=0; i<5; i++){
    //     if(i==0){
    //         for(int j=0; j<5-i; j++){
    //         cout<<j+1<<" ";
    //     }
    //     }else{
    //         for(int j=0; j<5-i; j++){
    //         if(j==0||j==5-1-i){
    //             cout<< j+1 <<" ";
    //         }else{
    //             cout<<"  ";
    //         }
    //     }
    //     }
    //     cout<<endl;
    // }

    for(int i=0; i<5; i++){
        for(int j=i+1; j<=5; j++){
                cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}