#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
map<int,int> pos;
for(int i=0;i<n;i++){
    int k;
    cin>>k;
    pos[k]=i;
}
int cnt=1;
for(int i=2;i<n+1;i++){
    if(pos[i]<pos[i-1]) cnt++;
     
}
cout<<cnt;





}