#include <bits/stdc++.h>
using namespace std;

int main(){
int n,m;
cin>>n>>m;
vector<int> ans;
vector<int> arr1={1,2,3,4,5,6,7,8,9,10};
vector<int> arr2={2,3,4,4,5,11,12};
int i=0;
int j=0;
while(i<n && j<m){
    if(arr1[i]<arr2[j]){
        if(ans.empty()){
            ans.push_back(arr1[i]);
            i++;
        }
        else if(!ans.empty() && ans.back()!=arr1[i]) {ans.push_back(arr1[i]); i++;}
        else i++;
    } 
    else if(arr2[j]<arr1[i]){
        if(ans.empty()){
            ans.push_back(arr2[j]); 
            j++;
        }
        else if(!ans.empty() && ans.back()!=arr2[j]) {ans.push_back(arr2[j]); j++;}
        else j++;
    } 
    else if(arr1[i]==arr2[j]){
        if(ans.empty()){
            ans.push_back(arr2[j]); 
            j++;
            i++;
        }
        else if(!ans.empty() && ans.back()!=arr2[j]) {ans.push_back(arr2[j]); j++;i++;}
        else {
            i++;
            j++;
        }

    }

}
while(i<n){
    if(ans.empty()){
            ans.push_back(arr1[i]);
            i++;
        }
    else if(!ans.empty() && ans.back()!=arr1[i]) {ans.push_back(arr1[i]); i++;}
    else i++;
}
while(j<m){
if(ans.empty()){
            ans.push_back(arr2[j]); 
            j++;
        }
else if(!ans.empty() && ans.back()!=arr2[j]) {ans.push_back(arr2[j]); j++;}
else{
            j++;
        }

}
for(int i:ans){
    cout<<i<<endl;
}

}
