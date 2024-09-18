#include<iostream>
using namespace std;

int reverse(int x){
    bool isNeg = false;
    if(x<0){
        isNeg = true;
        x = -x;
    }
    int ans = 0;
    while(x>0){
        int digit = x%10;
        ans = ans * 10 + digit;
        x = x/10;
    }
    return isNeg ? -ans : ans;
}

int main(){
    int n; 
    cin>>n;
    int reverseNum = reverse(n);
    cout<<reverseNum;
return 0;
}