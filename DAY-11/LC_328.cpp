// Odd Even  LL 

// brute force -->

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL  ||  head->next->next ==NULL) return head;
        vector<int> even;
        vector<int> odd;
        ListNode* temp = head;
        int cnt=1;
        while(temp!=NULL){
            if(cnt%2==0) even.push_back(temp->val);
            else odd.push_back(temp->val);
            cnt++;
            temp= temp->next;

        }
        temp = head;
        for(auto k: odd){
            temp->val = k;
            temp = temp->next;
        }
        for(auto k: even){
            temp->val = k;
            temp = temp->next;
        }
        return head;
    }
};


//optimal solution -->

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next ==NULL || head->next->next==NULL) return head;
        ListNode* odd = head;
        ListNode* temp = nullptr;
        ListNode* even = head->next;
        ListNode* tail = even;

        while(odd!=nullptr && even!=nullptr){
            temp= odd;
            odd->next = even->next;
            odd = odd->next;
            if(odd!=nullptr){
                 even->next = odd->next;
            even = even->next;
            }
            else break;
           
        }
        if(even==nullptr) odd->next=tail;
        else temp->next  = tail;
        return head;
    }
};