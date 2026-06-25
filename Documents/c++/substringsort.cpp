#include <bits/stdc++.h>
using namespace std;


bool func(string a, string b){
auto pos=b.find(a);
return pos!=string::npos;
}

int main(){
int n;
cin>>n;
vector<string> str(n);
for(int i=0;i<n;i++){
cin>>str[i];

}
int ans=1;
sort(str.begin(),str.end(),func);
for(int i=0;i<n-1;i++){
if(str[i+1].find(str[i])==string::npos) {
    ans=0;break;
}

}
if(ans==0) cout<<"NO";
else {
cout<<"YES\n";
for(int i=0;i<n;i++){
cout<<str[i]<<"\n";

}
}
}