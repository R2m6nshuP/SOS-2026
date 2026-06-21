#include <iostream>
using namespace std;
#include <array>
#include <vector>
// #include <bits/stdc++.h>

int main(){ 
vector <int> v={1,2,34,5};
auto it=v.begin();
// cout<<it;
// cout<<*it;
v.erase(v.begin());
cout<<v[0];

stack<int> st;
st.push(1);
st.push(342);
st.push(3);
st.pop();
cout<<st.top();
string s="rama";
do{
cout<<s<<endl;


}while(next_permutation(s.begin(),s.end()));

queue<int> q;
q.push(1);
q.push(2);
q.push(99);
q.pop();
cout<<endl;
cout<<q.front()<<q.back();

}
