#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* prev;
    Node* next;
    Node(int val) {
        data = val;
        prev = NULL;
        next = NULL;
    }
};
Node* deleteTail(Node* head){
if(!head) return NULL;
if(!head->next){
    delete head;
    return NULL;
}

Node* temp=head;
while(temp->next){
    temp=temp->next;
}
temp->prev->next=NULL;
delete temp;
return head;
}

int main(){


 Node* head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;
    head->next->next = new Node(3);
    head->next->next->prev = head->next;
    head = deleteTail(head);
    Node* curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
}