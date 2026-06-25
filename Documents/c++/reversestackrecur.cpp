#include <bits/stdc++.h>
using namespace std;
int main(){
stack<int> s;
s.push(4);
s.push(1);
s.push(2);
s.push(3);
stack<int> ans;
while(!s.empty()){
ans.push(s.top());
s.pop();
}
while(!ans.empty()){
cout<<ans.top()<<"\n";
ans.pop();
}
}