#include <bits/stdc++.h>
using namespace std;
int fun(int x){
    switch(x%4){
        case 1: 
            return 1;
        case 2: 
            return 4*((x/4)+1)-1;
        case 3:
            return 0;
    }
    return x;
}
int main(){
int l;
int r;
cin>>l>>r;
cout<<(fun(l-1)^fun(r));


}