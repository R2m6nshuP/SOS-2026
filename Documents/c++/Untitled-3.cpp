    #include <bits/stdc++.h>
    using namespace std;

    

    int main(){
    vector<int> answer;
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
    long long a,b,x;
    cin>>a>>b>>x;
    unordered_map<int,long long> A,B;
    int am=0;
    int bm=0;
    do(a>0){
        A[am]=a;
        a/=x;
        
        am++;

    }while(b>0)
    do{
        B[bm]=b;
        b/=x;
        bm++;
        

    }while(b>0)
    long long  ans=INT_MAX;
    for(auto ait : A){
        for(auto bit : B){
            ans=min(ans,(1LL*(ait.first+bit.first))+abs(ait.second-bit.second));
        }
    }
    answer.push_back(ans);
    }
    for(auto i: answer){
        cout<<i<<endl;
    }
    
}
