// Remove Nth node from the end of LL


// brute force-->
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL ||  head ->next == NULL) return NULL;
        int len=0;
        ListNode* temp = head;
        while(temp!=NULL){
            len  ++;
            temp  = temp->next;
        }
        int pos = (len -n) +1;
        ListNode* curr = head;
        if(pos==1){
            head = head ->next;
            curr ->next = NULL;
            delete  curr;
            return head;
        }
        ListNode* prev  = NULL;
        int cnt=1;
        while(cnt<pos){
            prev=curr;
            curr  = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;

        return head;

    }
};



// optimal solution -->


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* prev = NULL;
        int cnt=1;
        while(cnt<n){
            fast =  fast ->next;
            cnt++;

        }
        while(fast->next!=NULL){
            fast= fast->next;
            prev = slow;
            slow = slow->next;
        }
        if(slow==head){
            ListNode* temp= head;
            head = head->next;
            temp->next =NULL;
            delete temp;
            return head;
        }
        prev->next = slow->next;
        slow->next =NULL;
        delete slow;
        return head;



    }
};

