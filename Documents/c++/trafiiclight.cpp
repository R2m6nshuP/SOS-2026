#include <bits/stdc++.h>
using namespace std;

int main(){
int x;
cin>>x;
int n;
cin>>n;
multiset <int> len;
set<int> pos;
pos.insert(x);
pos.insert(0);
len.insert(x);
while(n){
int k;
cin>>k;
auto it=pos.insert(k).first;
auto r=next(it);
auto l=prev(it);
len.erase(len.find(*r-*l));
len.insert(*r-*it);
len.insert(*it-*l);
cout<<*len.rbegin()<<" ";



    --n;
}
}