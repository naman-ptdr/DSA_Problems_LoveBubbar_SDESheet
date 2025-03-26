#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(char name[]){
    int i = 0;
    int n = strlen(name);
    int j = n-1;
    while(i<=j){
        if(name[i]!=name[j]){
            return false;
        }else{
            i++, j--;
        }
    }
    return true;
}
int main(){
    char name[20];
    cin>>name;
    cout<<name;
    // cin.getline(name, 13);
    // cout<<name;
    if(checkPalindrome(name)){
        cout<<"   String is Palindrome";
    }else{
        cout<<"   String is Not a Palindrome";
    }
return 0;
}