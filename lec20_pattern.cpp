#include<iostream>
using namespace std;

int main(){
    int n;
    // cout<<("Enter any Integer : ");
    // cin>>n;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<i; j++){
    //         cout<<" ";
    //     }
    //     for(int k=0; k<n-i; k++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // Flipped solid Diamond

    // 
    // for(int i=0; i<5; i++){
    //     for(int j=0; j<5-i; j++){
    //         cout<<"*";
    //     }
    //     for(int k=0; k<(2*i)+1; k++){
    //         cout<<" ";
    //     }
    //     for(int j=0; j<5-i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(int i=0; i<5; i++){
    //     for(int j=0; j<i+1; j++){
    //         cout<<"*";
    //     }
    //     for(int k=0; k<((5-i)*2)-1; k++){
    //         cout<<" ";
    //     }
    //     for(int j=0; j<i+1; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // Fancy pattern
    // for(int i=0; i<4; i++){
    //     for(int j=0; j<i+1; j++){
    //         cout<<i+1;
    //         if(j!=i){
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }
    // for(int i=0;i<4; i++){
    //     for(int j=0; j<4-i; j++){
    //         cout<<4-i;
    //         if(j!=4-i-1){
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }

    // Alphabet palindrome pyramid
    for(int i=0; i<5; i++){
        for(int j=0; j<i+1; j++){
            int ans=j;
            char ch='A'+ans;
            cout<<ch<<" ";
        }for(int j=i; j>0; j--){
            int ans=j;
            char ch='A'+ans-1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
return 0;
}