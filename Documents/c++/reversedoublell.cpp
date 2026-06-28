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

Node* reverseDouble(Node* head){
if(!head || !head->next) return head;
Node* p=NULL;
Node* temp=head;

while(temp){
Node* n=temp->next;
temp->next=p;
p=temp;
temp->prev=n;
temp=n;
}
return p;
}


int main(){
Node* head=new Node(1);
head->next=new Node(2);
head->next->prev=head;
head->next->next = new Node(3);
head->next->next->prev = head->next;

head=reverseDouble(head);

while(head){
    cout<<head->val<<" ";
    head=head->next;
}


}