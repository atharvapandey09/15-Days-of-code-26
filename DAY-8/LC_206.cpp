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


 // REVERSE A LL
 // better approach for reversing a singely LL
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head== NULL || head ->next == NULL) return head;
        ListNode* temp= head->next;
        ListNode* prev= nullptr;
        while(temp!=NULL){
            head->next = prev;
            prev= head;
            head= temp;
            temp= temp->next;
        }
        head->next = prev;

        return head;
    }
};