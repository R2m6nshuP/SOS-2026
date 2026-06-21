#include <bits/stdc++.h>
using namespace std;


int main(){
int n,m,k;
cin>>n>>m>>k;
int desire[n];
int size[m];
for(int i=0;i<n;i++){
    int l;
    cin>>l;
    desire[i]=l;
}
for(int i=0;i<m;i++){
    int l;
    cin>>l;

    size[i]=l;
}
sort(desire,desire+n);
sort(size,size+m);
int d=0;
int s=0;
int cnt=0;

while( (d<n) && (s<m)){
    if(abs(desire[d]-size[s])<=k){
        // cout<<d;
        d++;
        s++;
        cnt++;
    }
    else{
        if(desire[d]>size[s]) s++;
        else d++;
    }
}
cout<<cnt;



}