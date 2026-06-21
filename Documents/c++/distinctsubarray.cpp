
#include <bits/stdc++.h>
using namespace std;

int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int n;
cin>>n;
long long ans=0;
int cnt=0;
unordered_map<int,int> pos;
pos.reserve(n);
int i,j=1;
for(i=0;i<n;i++){
int k;
cin>>k;
auto it=pos.find(k);
if(it==pos.end() || it->second<j){
     
    cnt++;
    
}
else{   
    j=it->second;
     
    cnt=1+(i-j);
}
pos[k]=i+1;
ans+=(cnt);

}

cout<<ans;


}