#include<iostream>
#include<vector>

using namespace std;
void wavePrint(vector<vector<int> >v){
    int r = v.size();
    int c = v[0].size();
    for(int col=0; col<c; col++){
        if((col&1)==0){
            for(int row=0; row<r; row++){
                cout<<v[row][col]<<" ";
            }
        }else{
            for(int row=r-1; row>=0; row--){
                cout<<v[row][col]<<" ";
            }
        }
    }
}
int main(){
    vector<vector<int> >v(3,vector<int>(4));
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[0].size(); j++){
            cin>>v[i][j];
        }
    }
    cout<<"Original Matrix : "<<endl;
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[0].size(); j++){
            cout<<v[i][j]<<" ";
        }
    }
    cout<<"After Wave Print Matrix will be : "<<endl;
    wavePrint(v);
return 0;
}