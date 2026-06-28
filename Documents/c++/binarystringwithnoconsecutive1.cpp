#include <bits/stdc++.h>
using namespace std;

void print(int n,set<string> &s,string i){
string k="";
if(n<=0) {s.insert(i);return ;}
if(n==1) {
    s.insert(i+"0");
    s.insert(i+"1");
    return ;
}
if(n==2){
k="00";
print(n-2,s,i+k);
k="01";
print(n-2,s,i+k);
k="10";
print(n-2,s,i+k);
return ;
}
print(n-1,s,i+"0");
print(n-2,s,i+"10");
return ;

}



int main(){
    int n;
    cin>>n;
    set<string> s;
    string i="";
    print(n,s,i);
    for(auto j: s){
        cout<<j<<" ";
    }
}