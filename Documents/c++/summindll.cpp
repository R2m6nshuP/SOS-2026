#include <bits/stdc++.h>
using namespace std;
struct Node{
int val;
Node* prev;
Node* next;

Node(int v,Node* p, Node* n){
this->val=v;
this->prev=p;
this->next=n;
}
Node(int v){
this->val=v;
this->prev=NULL;
this->next=NULL;
}
};

Node* insertAtEnd(vector<int> &v) {
        Node* head= new Node(v[0]);
        for(int i=1;i<v.size();i++){
        Node* newNode = new Node(v[i]);
        Node* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = newNode;
        newNode->prev = current;
        }
        return head;
    }

int main(){
vector<int> values = {1, 5, 6};
vector<vector<int>> ans;
Node* head=insertAtEnd(values);
Node* temp=head;
Node* last;
int target=6;

while(temp){
last=temp;
temp=temp->next;
}

temp=head;
while(temp->val<last->val){
if(temp->val+last->val==target){
ans.push_back({temp->val,last->val});
temp=temp->next;
last=last->prev;
}
else if(temp->val+last->val<target){
temp=temp->next;
}
else{
    last=last->prev;
}
}

for( auto vec: ans){
    for(auto i: vec){
        cout<<i<<" ";
    }
    cout<<"\n";
}


}