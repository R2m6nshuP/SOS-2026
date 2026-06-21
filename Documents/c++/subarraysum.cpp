#include <bits/stdc++.h>
using namespace std;
  int subarraysDivByK(vector<int>& nums, int k) {
      unordered_map<int,int> m;
m[0]=1;
int n=k;
int cnt=0;
int presum=0;
for(int i=0;i<nums.size();i++){
    presum+=nums[i];
    
    presum%=n;
    presum+=n;
    presum%=n;
    {cout<<presum<<endl;
        cnt+=m[presum];
    }
    m[presum]++;
}
return cnt;
  
    }
int main(){
vector<int> nums={7,4,-10 };
 cout<<subarraysDivByK(nums,5);

}