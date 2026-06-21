#include <bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;
multiset <int> tops;
for(int j=0;j<n;j++){
    int k;
cin>>k;
auto it=tops.upper_bound(k);
if(it==tops.end()){
    tops.insert(k);
}
else{
    tops.erase(it);
    tops.insert(k);
}
 
}
 
cout<<tops.size(); 





}