//82. Remove Duplicates from Sorted List II

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
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* curr = head;
        while(curr!= NULL){
            ListNode* track = curr;

            while(track!= NULL && curr->val == track->val){
                track = track->next;
            }
            if(curr->next != track){
                prev->next = track;
            }else prev = curr;
            curr= track;
        }
        return dummy->next;
    }
};
