#include<iostream>
using namespace std;
// bool checkEven(int n){
//     if(n%2==0){
//         return true;
//     }else{
//         return false;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     bool isEven = checkEven(n);
//     if(isEven){
//         cout<<n<<" is EVEN";
//     }else{
//         cout<<n<<" is ODD";
//     }
//     return 0;
// }

bool checkEven(int n){
    if(n%2==0){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int n; 
    cin>>n;
    // bool isEven = checkEven(n);
    if(checkEven(n)){
        cout<<"Even number";
    }else{
        cout<<"Odd number";
    }
    return 0;
}