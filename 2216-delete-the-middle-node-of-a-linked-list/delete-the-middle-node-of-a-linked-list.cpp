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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        if(head == nullptr || head -> next == nullptr)
            return nullptr;
        // else if (head -> next -> next == nullptr){
        //     head-> next = nullptr;
        //     return head;
        // }
        fast = fast -> next -> next;
        while(fast != nullptr && fast -> next != nullptr )
        {
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        ListNode* temp = slow -> next;
        slow -> next = temp -> next;
        delete temp;
        return head;
    }
};