#include<iostream>
using namespace std;

int main(){
    // for (int row = 0; row < 3; row++)
    // {
    //     if (row==0||row==2){
    //         for(int col = 0; col < 5; col++){
    //             cout<<"* ";
    //         }
    // }
    // else{
    //     cout<<"* ";
    //     for(int i=0; i<5-2; i++){
    //         cout<<"  ";
    //     }
    //     cout<<"* ";
    // }
    // cout<<endl;
    // }
    int rowCount, colCount;
    cout<<"for printing hollow square or reactangle : "<<endl;
    cout<<"Enter the no of Row : ";
    cin>>rowCount;
    cout<<"Enter the no of Collom : ";
    cin>>colCount;
    for(int row=0; row<rowCount; row++){
        if(row==0||row==rowCount-1){
            for(int col=0; col<colCount; col++){
                cout<<"* ";
            }
        }
        else{
            cout<<"* ";
            for(int i=0; i<colCount-2; i++){
                cout<<"  ";
            }
            cout<<"* ";
        }
        cout<<endl;
    }
return 0;
}