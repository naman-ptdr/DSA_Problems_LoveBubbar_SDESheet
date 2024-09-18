#include<iostream>
#include<string.h>
using namespace std;

int getlength(char name[]){
    int length = 0;
    int i = 0;
    while(name[i]!=0){
        length++;
        i++;
    }
    return length;
}

void reverse(char name[]){
    int i=0;
    int n=getlength(name);
    int j=n-1;
    while(i<=j){
        swap(name[i], name[j]);
        i++;
        j--;
    }
}
void replecespace(char name[]){
    int i=0;
    int n=getlength(name);
    for(int i=0; i<n; i++){
        if(name[i] == ' '){
            name[i] = '@';
        }
    }
}
int main(){
    // char fullname[20];
    // cin>>fullname;
    // cout<<fullname;

    // cout<<"Enter your name ";


    // cin.getline(fullname,50);
    // cout<<fullname;

    // char array[50];
    // cin>>array[2];
    // cin>>array[49];
    // cin>>array;

    char name[30];
    cin.getline(name, 30);


    // cout<<"length is -> "<< getlength(name)<<endl;
    // cout<<"length is -> "<<strlen(name)<<endl;

    // cout<<"Original name "<<name<<endl;
    // reverse(name);
    // cout<<"reverse Name "<<name<<endl;

    replecespace(name);
    cout<<name;

return 0;
}