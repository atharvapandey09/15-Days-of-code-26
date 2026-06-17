// Add two numbers

// Tried it by converting to int then add but got interger overflow
class Solution {
public:
    void InsertatTail(ListNode *&head,ListNode *&tail, int d){
        ListNode* newNode = new ListNode(d);
        if(head == nullptr) {
            head= newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = nullptr;
        ListNode* tail = nullptr;
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        int carry=0;
        while(temp1!=nullptr && temp2!=nullptr){
            int x = temp1->val + temp2->val + carry;
            if(x>9){
                InsertatTail(head,tail,x%10);
                carry=1;
            }
            else {
                InsertatTail(head,tail,x);
                carry=0;
            }
            temp1= temp1->next;
            temp2= temp2->next;
        }
        while(temp1!=nullptr){
            int x= temp1->val + carry;
            if(x>9){
           InsertatTail(head,tail,x%10);
                carry=1;
            }
            else {
                InsertatTail(head,tail,x);
                carry=0;
            }
             temp1= temp1->next;
        }
          while(temp2!=nullptr){
            int x= temp2->val + carry;
            if(x>9){
                InsertatTail(head,tail,x%10);
                carry=1;
            }
            else {
                InsertatTail(head,tail,x);
                carry=0;
            }
             temp2= temp2->next;
        }

        if(carry){
            InsertatTail(head,tail,1);

        }

        return head;
    }
};