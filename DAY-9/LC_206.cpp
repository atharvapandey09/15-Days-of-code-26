/*
Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};
*/


// Initially i did this way...

class Solution {
public:
    void func(ListNode* &head, ListNode* &prev, ListNode* &temp){
        if(temp== NULL){
            head->next= prev;
            return ;
        }
        head->next= prev;
        prev= head;
        head= temp;
        temp= temp->next;
        func(head,prev,temp);
        

    }


    ListNode* reverseList(ListNode* head) {
        if(head==NULL ) return head;
        if(head->next == NULL ) return head;
        ListNode* temp= head->next;
        ListNode* prev = NULL;
        func(head,prev,temp);
       
        return head;
    }
};

// took some help from the striver video for this solution


class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next == NULL) return head;
        ListNode*  newhead= reverseList(head->next);
        ListNode* front = head->next;
        front->next = head;
        head->next = NULL;

        return newhead;
    }
};