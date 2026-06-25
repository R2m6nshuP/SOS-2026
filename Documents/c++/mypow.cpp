#include <bits/stdc++.h>
using namespace std;

int main(){
cout<<INT_MAX%2;
class Solution {
public:
    double fun(double x,int n){
        if(n==0) return 1;
        if(n==1) return x;
        if(n>0){
        int half=n/2;
        double ans=fun(x,half);
        return ans*ans*fun(x,n%2);
        }
        else{
            return 1/fun(x,-n);
        }


    }
    double myPow(double x, int n) {
        return fun(x,n);
    }
};
Solution hi;
double a=2.0;
int b=2;
cout<<hi.myPow(a,b);

}