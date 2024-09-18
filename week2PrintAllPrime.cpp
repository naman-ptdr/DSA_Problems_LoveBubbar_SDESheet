#include<iostream>
#include<math.h>
using namespace std;

bool checkPrime(int x){
    for(int i=2; i<= sqrt(x); i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    for(int i=2; i<=n; i++){   //---------> because 1 is not a prime number
        bool isPrime = checkPrime(i);
        if(isPrime){
            cout<<i<<"\t";
        }
    }
    return 0;
}