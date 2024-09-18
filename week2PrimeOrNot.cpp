#include<iostream>
#include<math.h>
using namespace std;

// bool checkPrim(int n){
//     for(int i=2; i<n; i++){
//         if(n%i == 0){
//             return false;
//         }
//         else{
//             return true;
//         }
//     }
// }
bool checkPrim(int n){
    for(int i=2; i<= sqrt(n); i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    bool isPrime = checkPrim(n);
    if(isPrime){
        cout<<n<<" is a Prime number";
    }else{
        cout<<n<<" is not a Prime number";
    }
return 0;
}