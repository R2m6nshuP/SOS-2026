#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
map<int,int> mp;
for(int i=0;i<n;i++){
    int a,b;
    cin>>a>>b;
    mp[a]=1;
    mp[b]=-1;
}
int sum=0;
int ans=INT_MIN;
for( auto i : mp){
    sum+=i.second;
    ans=max(ans,sum);

}
cout<<ans;

}