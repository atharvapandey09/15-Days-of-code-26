// brute  force

class Solution {
public:
    int length (ListNode* &head){
        ListNode* temp= head;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        return cnt;
    }
    ListNode* middleNode(ListNode* head) {
        int l= length(head);
        int cnt=0;
            while(cnt<(l/2)){
                cnt++;
                head=head->next;
            }
            return head;
    }
};



// tortoise and bare algorithm


class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow= head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
            fast=fast->next;
        }
        return  slow;
    }
};
