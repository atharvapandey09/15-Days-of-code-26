
// LL Cycle II

// optimal soln -->

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL || head->next == NULL) return NULL;
        ListNode* fast = head;
        ListNode*  slow = head;
        while(fast!= nullptr && fast->next !=  nullptr){
            fast = fast->next->next;
            slow = slow->next;
            if(slow  == fast) {
                slow = head;
                break;
            }
        }
        if(slow!= head) return nullptr;
        while(slow!=fast){
            slow = slow->next;
            fast = fast ->next;
        }
       if(slow  == fast ) return slow;
       else  return nullptr;
    }
};