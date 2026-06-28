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

int main(){
Node* head=new Node(1);
head->next=new Node(1);
head->next->prev=head;
head->next->next = new Node(1);
head->next->next->prev = head->next;

Node* temp=head;
Node* prev=NULL;

while(temp){
    if(prev && temp->val==prev->val){
        Node* ptr=temp->next;
        prev->next=ptr;
        if(ptr) ptr->prev=prev;
        delete temp;
        temp=ptr;
    }
    else{
        prev=temp;
        temp=temp->next;
    }
    
} 

while(head){
    cout<<head->val<<" ";
    head=head->next;
}


}