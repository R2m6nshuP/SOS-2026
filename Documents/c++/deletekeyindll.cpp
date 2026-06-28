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
Node* head=new Node(2);
head->next=new Node(2);
head->next->prev=head;
head->next->next = new Node(2);
head->next->next->prev = head->next;

Node* temp=head;
Node* prev=NULL;
int x=2;

while(temp){
    if(temp->val==x){
        
        Node* ptr=temp->next;
        if(prev) prev->next=ptr;
        if(ptr) ptr->prev=prev; 
        if(temp==head) head=ptr;
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