//25. Reverse Nodes in k-Group

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
    bool check (ListNode* head, int k){
        int count=0;
        while(head!=NULL){
            count++;
            if(count>=k){return 1;}
            head=head->next;
        }
        return 0;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL){
            return head;
        }
        int count=0;
        ListNode * prev=NULL;
        ListNode * curr = head;
        ListNode * forw=NULL;
        while(count<k  && curr!=NULL){
            forw=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forw;
            count++;

        }
        if( check(curr,k)){
            ListNode * chote=reverseKGroup(curr,k);
            head->next=chote;
        }
        else{
            head->next=curr;
        }
        return prev;
    }
};
