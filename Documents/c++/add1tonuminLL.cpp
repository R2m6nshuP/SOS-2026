#include <bits/stdc++.h>
using namespace std;
class Node{
public: 
int val;
Node* next;
Node(int val){
    this->val=val;
    this->next=nullptr;
}
Node(int val,Node* p){
    this->val=val;
    this->next=p;
}
};

Node* reversell(Node* head){
Node* prev=NULL;
Node* ptr=head;
while(ptr){
Node* next=ptr->next;
ptr->next=prev;
prev=ptr;
ptr=next;
}
return prev;
}

int main(){


Node* head = new Node(9);
Node* second = new Node(9);
Node* third = new Node(9);
Node* fourth = new Node(9);
Node* fifth = new Node(0);
head->next=second;
second->next=third;
third->next=fourth;
fourth->next=fifth;

head=reversell(head);
Node* ptr=head;
int carry=0;
do{
    carry=(ptr->val+1)/10;
    ptr->val=(ptr->val+1)%10; 
    if(carry && !ptr->next){
        ptr->next = new Node(carry);
        break;
    }
    ptr=ptr->next;
}while(carry);
 
head=reversell(head);

while (head) {
            cout << head->val;
            head = head->next;
        }
        cout << endl;
    

}