//148. Sort List

#include <bits/stdc++.h>
using namespace std;

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
    

    ListNode* sortList(ListNode* head) {
        if(head==NULL) return NULL;
        if(head->next==NULL) return head;

        ListNode*fast=head->next->next;
        ListNode*slow=head;

        //Dividing
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }

        ListNode* second=sortList(slow->next);
        slow->next = NULL;
        ListNode * first =sortList(head);

        //Merge
        ListNode* dummy = new ListNode (-1);
        ListNode* i=dummy;

        while(first!=NULL && second!=NULL){
            if(first->val > second->val){
                i->next=second;
                second=second->next;
            }
            else{
                i->next = first;
                first = first->next;
            }
            i=i->next;
        } 
        if(first==nullptr){
            i->next = second;
        }
        if(second==nullptr){
            i->next =first;
        }

        return dummy->next;
    }
};
