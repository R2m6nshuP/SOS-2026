#include <bits/stdc++.h>
using namespace std;

int main(){
int n,m;
cin>>n>>m;
multiset<int> ticket;
vector<int> price;
 

for (int i = 0; i < n; i++)
{
    int k;
    cin>>k;
    ticket.insert(k);
}
// sort(ticket.begin(),ticket.end());
for (int i = 0; i < m; i++)
{
    int k;
    cin>>k;
    auto l=(ticket.upper_bound(k));

    if(l==ticket.begin()) price.push_back(-1);
    else{ price.push_back(*(--l)); ticket.erase(l);}
}
for(int i:price){
    cout<<i<<endl;
}



}