//234. Palindrome Linked List

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
    ListNode* reverse(ListNode* head){
        if(head==NULL || head->next==NULL) return head;

        ListNode* reversed= reverse(head->next);
        head->next->next = head;
        head->next=NULL;

        return reversed;

    }
    bool isPalindrome(ListNode* head) {
        if (head==NULL || head->next== NULL) return head;

        //finding middle 
        ListNode* s= head; 
        ListNode* f= head;

        while(f!=NULL && f->next!=NULL){
            s=s->next;
            f=f->next->next;
        }

        if(!s)s=s->next;
        //reverse 
        s=reverse(s);

        //comparing
        while(s!=NULL){
            if(s->val != head->val) return 0;
            s=s->next;
            head= head->next;
        }

        return 1;
        
    }
};
