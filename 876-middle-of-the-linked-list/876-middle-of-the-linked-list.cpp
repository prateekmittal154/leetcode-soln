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
    ListNode* middleNode(ListNode* head) {
        
        if(head== NULL){
            
            return NULL;
        }
        
        if(head->next == NULL){
            
            return head;
        }
        
        if(head->next->next == NULL){
            
            return head->next;
        }
        
        
        ListNode* slow = head;
        ListNode* fast = head->next;
    
        
        while(fast != NULL){
            
            fast = fast->next;
            
            if(fast != NULL){
                
                fast = fast->next;
            }
            
            slow = slow->next;
            
        }
            
        return slow ;
    }
};