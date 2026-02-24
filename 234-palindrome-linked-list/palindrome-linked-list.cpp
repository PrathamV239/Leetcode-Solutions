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
    bool isPalindrome(ListNode* head) {
        ListNode* curr1 = head;
        ListNode* curr2 = head;
        stack <int> st;
        if(head ->next == nullptr)
            return true;

        while(curr2 != nullptr && curr2->next != nullptr){            
            st.push(curr1->val);
            curr1 = curr1->next;
            curr2 = curr2->next->next;
        }
        if(curr2 != nullptr && curr2->next == nullptr)
            curr1 = curr1->next;
        while (curr1 != nullptr && st.top() == curr1->val){
            st.pop();
            curr1= curr1->next;
        }
      
        if(!st.empty())
            return false;          
    return true;

    }
};