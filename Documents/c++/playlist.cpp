#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int ans=0;
int cnt=0;
unordered_map<int,int> song;
int j=0;

for(int i=0;i<n;i++){
    int k;
    cin>>k;
if(song[k]==0 || song[k]<j+1){
    song[k]=i+1;
}
else{
    j=song[k];
    song[k]=i+1;
}
cnt=i-j+1;
 
ans=max(ans,cnt);

}
cout<<ans;
}