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
    ListNode* reverseLL(ListNode* head){
        if(head == nullptr || head-> next == nullptr)
            return head;
        ListNode* newhead = reverseLL(head -> next);
        ListNode* front = head-> next;
        front -> next = head;
        head -> next = nullptr;
        return newhead;
    }

    bool isPalindrome(ListNode* head) {
    
    // O(N) TC
    // O(N) SC

    //     ListNode* curr1 = head;
    //     ListNode* curr2 = head;
    //     stack <int> st;
    //     if(head == nullptr || head ->next == nullptr)
    //         return true;

    //     while(curr2 != nullptr && curr2->next != nullptr){            
    //         st.push(curr1->val);
    //         curr1 = curr1->next;
    //         curr2 = curr2->next->next;
    //     }
    //     if(curr2 != nullptr && curr2->next == nullptr)
    //         curr1 = curr1->next;
    //     while (curr1 != nullptr && st.top() == curr1->val){
    //         st.pop();
    //         curr1= curr1->next;
    //     }
      
    //     if(!st.empty())
    //         return false;          
    // return true;

    if(head == nullptr || head -> next == nullptr )
        return true;
    ListNode* slow = head;
    ListNode* fast = head->next;

    while(fast != nullptr && fast-> next != nullptr){
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    ListNode* secondhalf = slow -> next;
    slow -> next = nullptr;
    ListNode* newhead = reverseLL(secondhalf);

    ListNode* first = head;
    ListNode* second = newhead;
    while(second != nullptr){
        if(first -> val != second-> val){
         newhead = reverseLL(newhead);
            slow ->next = newhead;
            return false;
        }
        first = first -> next;
        second = second -> next;
    }
    newhead = reverseLL(newhead);
    slow ->next = newhead;
    return true;
    }
};