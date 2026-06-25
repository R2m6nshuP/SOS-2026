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

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    fifth->next = second;
    Node* fast=head;
    Node* slow=head;
    int cnt=0;
    while( fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            break;
        }

    }
     while( fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        cnt++;
        if(slow==fast){
            break;
        }

    }
    cout<<cnt;

}