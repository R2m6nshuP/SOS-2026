#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> veca,vecb;
    for(int i=0;i<n;i++) cin>>v[i];
    vector<int> ans;
    int x=0;
    for(int i=0;i<n;i++) (x^=v[i]);
    int i=0;
    while((1<<i)<=x){
        if(((1<<i)&x)){
            break;
        }
        i++;
    }
    for(int j=0;j<n;j++){
        if(((1<<i)&v[j])){
            veca.push_back(v[j]);
        }
        else{
            vecb.push_back(v[j]);
        }

    }
    x=0;
    for(int i=0;i<veca.size();i++) (x^=veca[i]);
    ans.push_back(x);
    x=0;
    for(int i=0;i<vecb.size();i++) (x^=vecb[i]);
    ans.push_back(x);
if(ans[0]<ans[1]) cout<<ans[0]<<" "<<ans[1];
else cout<<ans[1]<<" "<<ans[0];






}