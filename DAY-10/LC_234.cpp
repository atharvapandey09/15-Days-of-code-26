// Palindrome LL (optimal solution)

class Solution {
public:

    ListNode* reverseLL(ListNode* head){
        ListNode* prev = NULL;
        ListNode* front = head->next;
        while(front!=NULL){
            head->next = prev;
            prev= head;
            head = front;
            front = front->next;
        }
        head->next=prev;

        return head;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head -> next==NULL) return head;
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast!=NULL &&  fast->next != NULL){
            fast= fast->next->next;
            slow = slow->next;

        }
        ListNode* tail = reverseLL(slow);
        while(head!=NULL && tail!=NULL){
            if(head->val != tail->val) return false;
            head= head->next;
            tail = tail->next;

        }
        return true;


    }
};