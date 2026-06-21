#include <bits/stdc++.h>
using namespace std;



    // int n;
    int maxFrequency(vector<int>& nums, int k, int numOperations) {
        vector<int> diff(nums.size()-1);
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
        }
        for(int i:diff){
            cout<<i<<endl;
        }
        int sum=0;
        int ans=1;
        int prevcnt=INT_MIN;
        for(int i=0;i<nums.size()-1;i++){
            if(sum+diff[i]<=numOperations) {
                // cout<<diff[i]<<endl;
                sum+=diff[i];
                ans++;
            }
            else{
                prevcnt=max(prevcnt,ans);
                ans=1;
                sum=0;
            }
        }
            // cout<<ans<<endl;
            prevcnt=max(prevcnt,ans);
            return prevcnt;

    }
// // //     cin>>n>>m;
// map<int,int> mp;
// mp[1]=2;
// mp[2]=3;
// auto last=mp.rbegin();
// cout<<last.first;
// //     int l=0,r=n;

// int ans=-1;
//     while(l<=r){
//         int mid=l+(r-l)/2;
//         if(pow(mid,m)==n) { ans =mid;break;}
//         else if(pow(mid,m) < n ) l=mid+1;
//         else {r=mid-1;
            
//         }
int main(){
    // 
    vector<int> nums={ 1,90};
    cout<<maxFrequency(nums,76,1);
//     }
//     cout<<ans;
//     return 0;
}