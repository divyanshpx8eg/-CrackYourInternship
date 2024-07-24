//19. Remove Nth Node From End of List

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL) return NULL;

        ListNode* first = head;
        ListNode* second= head;
        ListNode* prev=NULL;

        for(int i=1;i<n;i++){
            second=second->next;
        }
        while(second->next!=NULL){
            prev=first;
            first=first->next;
            second=second->next;
        }
        if(prev){
            prev->next=first->next;
        }
        else{
            head=head->next;
        }
        delete first;
        return head;

    }

};
