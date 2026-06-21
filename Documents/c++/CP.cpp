#include <bits/stdc++.h>
using namespace std;

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);
 
int n,m,q;
cin>>n>>m>>q;
vector <vector <int>> arr(n,vector <int>(m) );
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}


vector <vector <long long>> s (n,vector <long long>(m) );
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
    if(j==0) s[i][j]=arr[i][j];    
    else s[i][j]=arr[i][j]+s[i][j-1];
    }
}
vector <long long> v;
int x1,x2,y1,y2;
for(int i=0;i<q;i++){
cin>>x1>>y1>>x2>>y2;
long long sum=0;
for(int j=x1-1;j<x2;j++){
    if(y1==1) sum+=s[j][y2-1];
    else sum+=s[j][y2-1]-s[j][y1-2];
}
v.push_back(sum);
}
for(int i=0;i<q;i++){
    cout<<v[i]<<endl;

}
}
