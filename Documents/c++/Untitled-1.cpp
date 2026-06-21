#include <bits/stdc++.h>
using namespace std;

 

int main(){
vector<string> answer;
int t;
cin>>t;
for(int i=0;i<t;i++){
    string n;
    int k;
    string ans;
    cin>>n>>k;
    long long nm=0;;
    for(int j=n.size()-1;j>-1;j++){
        nm+=pow(2,j)*n[j];
    }
    long long m=(pow(2,k)+1);
    (nm % m )==0 ? ans="YES" : ans="NO";



 answer.push_back(ans);
}
for( string i: answer){
    cout<<i<<endl;

}
    
 
}
