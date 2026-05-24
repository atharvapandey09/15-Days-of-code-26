// Sort List

//brute force-->

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next ==  NULL) return head;
        ListNode* temp = head;
        multiset<int> st;
        while(temp!=nullptr){
            st.insert(temp->val);
            temp = temp->next;
        }
        temp = head;
        for(auto k:st){
            temp->val=k;
            temp= temp->next;
        }
        return head;

    }
};