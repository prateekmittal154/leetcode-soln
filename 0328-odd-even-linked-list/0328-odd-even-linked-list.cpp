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
    ListNode* oddEvenList(ListNode* head) {
        
        if(head==NULL) return NULL;
        
        if(head->next ==NULL || head->next->next==NULL) return head;
        
        ListNode* odd  = head;
        ListNode* even = head->next;
        ListNode* temp = head->next->next;
        ListNode* last_even = head->next;
        int i = 3;
        
        while(temp != NULL){
            if(i%2==0){ 
                even->next = temp;
                even = even->next;
            }
            
            else{
                odd->next = temp;
                odd = odd->next;
            }
            
            temp = temp->next;
            i++;
        }
        
        odd->next = last_even;
        even->next = NULL;
        
        return head;
    }
};