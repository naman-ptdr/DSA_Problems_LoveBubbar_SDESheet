#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        for(int s=0; s<(n*2)-2*i-2; s++){
            cout<<"  "; 
        }  //---------------------->  // for(int l=0; l<n-i-1; l++){  cout<<"  ";  }   for(int s=0; s<n-i-1; s++){  cout<<"  ";
        for(int k=0; k<=i; k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<"* ";
        }
        for(int s=0; s<2*i; s++){
            cout<<"  ";
        }
        for(int k=0; k<n-i; k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}