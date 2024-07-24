//143. Reorder List

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
    void reorderList(ListNode* head) {
        if (head==NULL || head->next== NULL || head->next->next==NULL) return;

        //finding middle 
        ListNode* s= head; 
        ListNode* f= head;

        while(f!=NULL && f->next!=NULL){
            s=s->next;
            f=f->next->next;
        }

        ListNode* r;
        int flag=0;
        if(f){//odd size
            r= s->next;
            s->next=NULL;
            flag=1;
        }else{//even size
            r=s;
        }

        //reversed the LL from middle
        r= reverse(r);

        ListNode* dummy = new ListNode(-1);
        ListNode* i=dummy;

        while(r!=NULL){
            i->next= head;
            head=head->next;
            i=i->next;

            i->next= r;
            r=r->next;
            i=i->next;
        }
        if(flag){
            i->next = head;
            i->next->next=NULL;
        } 

        head=dummy->next;

    }
};
