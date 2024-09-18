#include<iostream>
#include<string.h>
using namespace std;
bool checkPalindrom(char name[]){
    int i=0; 
    int n=strlen(name);
    int j=n-1;
    while(i<=j){
        if(name[i]!=name[j]){
            return false;
        }else{
            i++;
            j--;
        }
    }
    return true;
}
int main(){
    char name[20];
    cin>>name;
    if(checkPalindrom(name)){
        cout<<"String is palindrom ";
    }else{
        cout<<"String is not palindrom ";
    }
return 0;
}