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
      
        int cntr = 0;
        ListNode* curr = head;


        while(curr != NULL){
            cntr++;
            curr = curr -> next;

        } 

        
        
        if( n == cntr){
            ListNode* temp = head;
            head = head-> next;
            delete temp;
            return head;
        }

int num = cntr - n;


        curr = head;
        cntr = 1;
        while(cntr != num){
            curr = curr ->next;
            cntr++;
        }
        curr -> next = curr -> next -> next;
        return  head;
    }
};