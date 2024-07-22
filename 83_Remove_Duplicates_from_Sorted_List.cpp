//83. Remove Duplicates from Sorted List

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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) return head;
        ListNode* real= head;
        ListNode* copy= head->next;
        
        while(copy){
            if(copy->val==real->val){
                real->next=copy->next;
                copy= real->next;
            }
            else{
                real=copy;
                copy=copy->next;
            }
        }
        return head;
    }
};
