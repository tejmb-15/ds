#include<iostream>
#include<vector>
using namespace std;

void rec(vector<char>c,vector<vector<char>>&res,vector<char>&curr,int k){
    if(k==0){
        res.push_back(curr);
        return;
    }
    for(int i=0;i<c.size();i++){
        curr.push_back(c[i]);
        rec(c,res,curr,k-1);
        curr.pop_back();
        //next=i+1;
    }
}
int main(){
    vector<char>c={'a','b'};
    int k=3;
    vector<vector<char>>res;
    vector<char>curr;
    rec(c,res,curr,k);

    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}
