//92. Reverse Linked List II

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
    ListNode* reverseList(ListNode* head , int diff , ListNode*& store) {

        if(diff==0) {
            store = head->next;
            return head;
        }

        ListNode* reversed = reverseList(head->next , diff-1 , store);

        head->next->next = head;
        head->next=NULL;
        return reversed;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        ListNode* dummy  = new ListNode(-1);
        dummy ->next = head;


        ListNode* storeR= dummy;
        ListNode* curr =head;

        int count=1;
        while(count!= left){
            storeR= storeR-> next;
            curr= curr->next;
            count++;
        }
        ListNode * firstNode = curr;
        ListNode* storeL= nullptr;

        ListNode* lastNode= reverseList(curr , right - left , storeL);
     
        storeR->next = lastNode;
        firstNode->next = storeL;
        return dummy->next;
    }
};
