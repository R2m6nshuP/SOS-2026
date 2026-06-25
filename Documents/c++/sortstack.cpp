#include <bits/stdc++.h>
using namespace std;
void insertStack(stack<int> &s,int val){
if(s.empty() || s.top()<=val){
    s.push(val);
    return ;
}
int temp=s.top();
s.pop();
insertStack(s,val);
s.push(temp);
}

void sortStack(stack<int> &s){
if(s.empty()) return;
int temp=s.top();
s.pop();
sortStack(s);
insertStack(s,temp);
}

int main(){
stack<int> s;
s.push(4);
s.push(1);
s.push(2);
s.push(3);
sortStack(s);
while(!s.empty()){
cout<<s.top()<<"\n";
s.pop();
}
}