#include <bits/stdc++.h>
using namespace std;
#include<iomanip>
#include <algorithm>
template <typename T>

T maxx(T x,T y){
   return x>y ?  x:y;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

  cout<<maxx(1,2)<<endl;
  cout<<maxx(1.1,2.2)<<endl;
  cout<<maxx('1','2')<<"\n";
vector <int> v={1,2,34,5};
vector<int>::iterator it=v.begin();
// cout<<it;
cout<<*it;
class student{
    public:
    string name;
    double gpa;

    void eat(){
    cout<<this->name<<" is eating";
    }
    student(string n="nigger didnt tell his name" ,double a =1){
        this->name=n;
        this->gpa=a;
    }
};
student ab;
// ab.name="Ramanshu";
// ab.gpa=1.2;
// ab.eat();
set<int> s={1,1,1,1,1};
auto its=s.upper_bound(1);
cout<<'\n';
cout<<*its;
s.erase(its);

    

}