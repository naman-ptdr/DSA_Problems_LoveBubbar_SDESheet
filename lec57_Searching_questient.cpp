#include<iostream>
using namespace std;

int solve(int divident, int divisor){
    int s = 0;
    int e = abs(divident);
    int mid = (s+e)/2;
    int ans;
    while(s<=e){
        if(mid*abs(divisor) == abs(divident)){
            ans = mid;
            break;
        }else if(mid*abs(divisor)<abs(divident)){
            ans = mid;
            s = mid + 1;
        }else{
            e = mid - 1;
        }
        mid = (s+e)/2;
    }
    if((divisor<0 && divident<0) || (divisor>0 && divident>0)){
        return ans;
    }else{
        return -ans;
    }
}
int main(){
    int divident = 22;
    int divisor = -7;
    int ans = solve(divident, divisor);
    cout<<"Questient is "<<ans<<endl;
return 0;
}