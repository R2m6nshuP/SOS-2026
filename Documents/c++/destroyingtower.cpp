#include <bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
vector<int> ans(t);
for(int i=0;i<t;i++){
int n;
cin>>n;
vector<int> tower;
 
for(int j=0;j<n;j++){
    int k;
    cin>>k;
    tower.push_back(k);
}

long long sum=0;
int j=0;
while(j<n){
    int k=j+1;
    while(k<n){
        if(tower[k]>tower[j]){
            tower[k]=tower[j];
            break;
        }
        k++;
    }
    j++;
}
for(int j=0;j<n;j++){
    sum+=tower[j];
}
ans[i]=sum;


}


for(int i: ans){
    cout<<i<<endl;
}
}