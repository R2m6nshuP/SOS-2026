/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        int cnt=1;
        ListNode* temp=head;
        while(cnt<=k){
            cnt++;
            temp=temp->next;
        }
        ListNode* prev=temp; ,,
        temp=head;
        cnt=1;
        while(cnt<=k){
            cnt++;
            ListNode* link=temp->next;
            temp->next=prev;
            prev=temp;
            temp=link;
        }
        head=prev;   
        return head;    
    }
};