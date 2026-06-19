// Sort a LL of 0,1,2

class Solution {

    public:
        
        ListNode* sortList(ListNode* &head) {
            if(head==nullptr || head->next==nullptr) return head;
            ListNode * one_head = nullptr;
            ListNode* zero_head= nullptr;
            ListNode* two_head= nullptr;
            ListNode * one_tail = one_head;
            ListNode * zero_tail = zero_head;
            ListNode * two_tail = two_head;

            ListNode* temp = head;
            while(temp!=NULL){
                if(temp->data ==1){
                   if(one_tail==nullptr){
                    one_head=temp;
                    one_tail=temp;
                   }
                   else{
                        one_tail->next = temp;
                        one_tail = temp;
                   }
                }
                else if(temp->data ==2){
                     if(two_tail==nullptr){
                    two_head=temp;
                    two_tail=temp;
                   }
                   else{
                        two_tail->next = temp;
                        two_tail = temp;
                   }
                }
                else{
                   if(zero_tail==nullptr){
                    zero_head=temp;
                    zero_tail=temp;
                   }
                   else{
                        zero_tail->next = temp;
                        zero_tail = temp;
                   }
                }
                temp = temp->next;
            }
            if((zero_tail==nullptr && one_tail==nullptr) || (one_tail==nullptr&&two_tail==nullptr) || (two_tail==nullptr&&zero_tail==nullptr)) return head;
           if(zero_tail!=nullptr && one_tail!=nullptr&&two_tail!=nullptr){
            zero_tail->next = one_head;
            one_tail->next = two_head;
            two_tail->next = nullptr;
            head=zero_head;
            return head;
           }
           if(zero_tail==nullptr){
            one_tail->next=two_head;
            two_tail->next = nullptr;
            head= one_head;
           }
           else if(one_tail==nullptr){
            zero_tail->next=two_head;
            two_tail->next = nullptr;
            head= zero_head;
           }
           else if(two_tail==nullptr) {
            zero_tail->next = one_head;
            one_tail->next = nullptr;
            head= zero_head;
           }

            return head;
        }
};