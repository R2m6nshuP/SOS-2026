#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
vector<pair<int,int>> v;

for(int i=0;i<n;i++){
    int a,b;
    cin>>a>>b;
    v.push_back({b,a});
}
sort(v.begin(),v.end());
int lastWatched=0;
int ans=0;
for( auto &[end,start] : v){
if(start>=lastWatched){
    ans++;
    lastWatched=end;
}


}

cout<<ans;

}