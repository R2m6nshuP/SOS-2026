#include <bits/stdc++.h>
using namespace std;

void adder(string s, vector<string> &v,int o,int c,int n ){
if(o==c && c==n){
    v.push_back(s);
    // cout<<s<<"\n";
    return;
}
if(o<n){
    adder(s+"(",v,o+1,c,n);
}
if(c<o){
    adder(s+")",v,o,c+1,n);
}
return ;
}

int main(){
int n;
cin>>n;
string s="";
vector<string> v;
adder(s,v,0,0,n);
for(auto i: v){
    cout<<i<<"\n";
}
}