#include <bits/stdc++.h>
using namespace std;
int main(){
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

Node* head = new Node(1);
Node* second = new Node(2);
Node* third = new Node(3);
Node* fourth = new Node(4);
Node* fifth = new Node(5);

Node* prev=NULL;
Node* ptr=head;
while(ptr){
Node* next=ptr->next;
ptr->next=prev;
prev=ptr;
ptr=next;
}

ptr=prev;
int carry=0;
carry=(ptr->val+1)/10;  
while(ptr){
    carry=(ptr->val+carry)/10;  

    if(!carry) {ptr->val++;break;}
    else{
        ptr->val=0;
    }
    if(!ptr->next && carry>0){
    Node* last= new Node(1);
    ptr->next=last;
    }
    ptr=ptr->next;
}
ptr=prev;
prev=NULL;

while(ptr){
Node* next=ptr->next;
ptr->next=prev;
prev=ptr;
ptr=next;
}
 
while (prev) {
            cout << prev->val;
            prev = prev->next;
        }
        cout << endl;
    

}