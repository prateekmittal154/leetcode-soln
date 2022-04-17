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
    ListNode* reverseList(ListNode* head) {
        
    ListNode *current = head;

    ListNode *next = NULL;
    ListNode *prev = NULL;

    while(current != NULL){

        //storing value of next

        next = current ->next;

        // changing the value of next to prev

        current->next = prev;

        //moving the pointers 1 pos ahead

        prev= current;
        current= next;
    }
    
head = prev;
return head;

        
        
        
    }
};