#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
vector<int> v;

 
for(int i=0;i<n;i++){
int k;
cin>>k;
v.push_back(k);
 
}
sort(v.begin(),v.end());
int l=v[n/2];
long long ans=0;
for(int i=0;i<n;i++){
ans+=abs(l-v[i]);
}
cout<<ans;
}