#include <bits/stdc++.h>
using namespace std;

int main(){
int n,x;
cin>>n>>x;
vector<int> weight;
for (int i = 0; i < n; i++)
{
    int k;
    cin>>k;
    weight.push_back(k);
}
sort(weight.begin(),weight.end());
int l=0;
int r=n-1;
int cnt=0;
while(l<=r){

if(weight[l]+weight[r]<=x){
cnt++;
l++;
r--;
}
else {
    cnt++;
    r--;
}    
}
cout<<cnt;


}