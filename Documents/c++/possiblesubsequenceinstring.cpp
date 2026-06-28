#include <bits/stdc++.h>
using namespace std;

void adder(int i,set<string> &se,string s,string poss){
if(i>=s.size()) {
    se.insert(poss);
    return;
}
adder(i+1,se,s,poss);
poss+=s[i];
adder(i+1,se,s,poss);
return ;
}

int main(){
    string s;
    cin>>s;
    string poss="";
    set<string> se;
    adder(0,se,s,poss);
    for( auto i: se){
        cout<<i<<" ";
    }
}