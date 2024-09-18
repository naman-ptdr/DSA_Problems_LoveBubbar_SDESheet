#include<iostream>
using namespace std;
int findSqrt(int n){
    int ans = -1;
    int s = 0;
    int e = n;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(mid*mid==n){
            return mid;
        }
        if(mid*mid<n){
            ans = mid;
            s = mid + 1;
        }else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;

    int ans = findSqrt(n);
    cout<<"Ans is "<< ans<<endl;

    int precision;
    cout<<"Enter the number of floating digits in precision "<<endl;
    cin>>precision;
    double step = 0.1;
    double finalAns = ans;

    for(int i=0; i<precision; i++){
        for(double j=finalAns; j*j<=n; j=j+step){
            finalAns = j;
        }
        step = step/10;
    }
    cout<<"Final ans is. "<<finalAns<<endl;
return 0;
}