#include <bits/stdc++.h>
using namespace std;

void subse(vector<int> n,vector<vector<int>> &v,int t,vector<int> poss,int i){
if(t==0){
    v.push_back(poss);
    return ;
}
if(i==n.size()) return ;
if(t<0) return;

subse(n,v,t,poss,i+1);
poss.push_back(n[i]);
subse(n,v,t-n[i],poss,i+1);
poss.pop_back();
return ;
}

int main(){
vector<int> nums={4, 2, 10, 5, 1, 2,1};
vector<vector<int>> v;
vector<int> poss;
int target=5;
subse(nums,v,target,poss,0);
for(auto  n: v){
    for(int i: n){
        cout<<i<<" ";
    }
    cout<<"\n";
}
}