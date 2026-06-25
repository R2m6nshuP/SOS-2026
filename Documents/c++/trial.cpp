#include <bits/stdc++.h>
using namespace std;
int main(){
int num=7;
int i=0;

while((1<<i)<num){
if( !(num & (1<<i))) {num=(num|(1<<i));break;}
else i++;

    
}
cout<<num;
// cout<< (num|num+1);

}