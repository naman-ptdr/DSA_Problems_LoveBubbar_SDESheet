#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(int row=0; row<n; row++){
        for(int col=0; col<row+1; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    // for(int row=0; row<6; row++){
    //     for(int col=0; col<=row; col++){
    //         cout<<"* ";
    //     }
    //     for(int i=row; i<6; i++){
    //         cout<<"  ";
    //     }
    //     cout<<endl;
    // }
    
return 0;
}