#include<bits/stdc++.h>
using namespace std;
bool isPossibleSolution(vector<int>& cooksRank, int nP, int mid){
    int currP = 0;
    for(int i=0; i<cooksRank.size(); i++){
        int R = cooksRank[i]; 
        int j = 1;
        int timeTaken = 0;
        while(true){
            if(timeTaken + j*R <= mid){
                timeTaken += j*R;
                j++;
                currP++;
            }else{
                break;
            }
        }
        if(currP>=nP) return true;
    }
    return false;
}


int miniTimeToCompleteTask(vector<int>& cooksRank, int nP){
    int ans = 0;
    int start = 0;
    int end = *max_element(cooksRank.begin(), cooksRank.end());
    while(start<=end){
        int mid = start + (end-start) >> 1;
        if(isPossibleSolution(cooksRank, nP, mid)){
            ans = mid;
            end = mid - 1;
        }else{
            start = mid+1;
        }
    }
    return ans;
}


int main(){
    int T;
    cin>>T;
    while(T--){
        int nP, nC;
        cin>>nP>>nC;
        vector<int> cooksRank;
        while(nC--){
            int R;
            cin>>R;
            cooksRank.push_back(R);
        }
        cout<<miniTimeToCompleteTask(cooksRank, nP);
    }
return 0;
}