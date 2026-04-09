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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL)
        return head;
        ListNode* dumm = new ListNode(-1);
        dumm -> next = head;

        ListNode* curr = dumm;

        while(curr != NULL && curr -> next != NULL){
            
            if(curr -> next -> val == val){
                ListNode* temp = curr -> next;
                curr -> next = temp -> next;
                delete temp;
            }
            else 
                curr = curr -> next;
        }
        return dumm -> next;

    }
};