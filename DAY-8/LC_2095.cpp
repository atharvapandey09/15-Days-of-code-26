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


 // DELETE MIDDLE NODE IN A LL
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL) return head;
        if(head->next== NULL){
            head= NULL;
            return head;
        }
        ListNode* fast = head;
        ListNode* slow = head;
        fast= fast->next->next;

        while(fast!= NULL && fast->next !=NULL){
        fast= fast->next->next;
        slow = slow->next;
        }
        ListNode* temp = slow->next;
        slow->next= temp->next;
        temp->next= NULL;
        delete temp;
        return head;



        }
       
       
    };