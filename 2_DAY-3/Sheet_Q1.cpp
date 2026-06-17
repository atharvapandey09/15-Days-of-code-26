// Add 1 to a number represented by LL

// Tried it by converting to int then add but got interger overflow

class Solution {
public:
    ListNode* reverseLL(ListNode* &head){
        if(head->next==NULL) return head;
        ListNode* front=head;
        ListNode* back=NULL;
        while(front!= NULL){
            ListNode* temp = front->next;
            front->next=back;
            back= front;
            head= back;
            front = temp;
        }
        return head;

    }
    ListNode *addOne(ListNode *head) {
        if(head==NULL) return NULL;
        reverseLL(head);
        ListNode* temp = head;
        int carry=1;
        while(temp!=NULL){
            if(temp->val==9){
                if(carry) temp->val =0;
                else carry=0;
            }
            else {
                if(carry){
                    temp->val+=1;
                    carry=0;
                }
                else break;
            }
            temp = temp->next;
        }
        reverseLL(head);
        if(carry){
            ListNode* newNode = new ListNode(1);
            newNode->next = head;
            head = newNode;
        }
        return head;
    }
};