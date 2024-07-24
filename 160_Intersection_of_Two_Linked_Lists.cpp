//160. Intersection of Two Linked Lists

#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        //length of A
        ListNode* temp=headA;
        int countA=0;
        while(temp!=NULL){
            countA++;
            temp=temp->next;
        }

        //length of b 
        temp=headB;
        int countB=0;
        while(temp!=NULL){
            countB++;
            temp=temp->next;
        }

        //making both length equal for comparing
        if(countA > countB ){
            while(countA!=countB){
                headA=headA->next;
                countA--;
            }
        }
        else{
            while(countA!=countB){
                headB=headB->next;
                countB--;
            }
        }

        //comparing each node for result
        while(headA!=headB){
            headA=headA->next;
            headB= headB->next;
        }

        return headA;

    }
};
