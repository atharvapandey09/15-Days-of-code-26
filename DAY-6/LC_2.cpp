//  solved leetcode problem no. 2 -> Add two numbers
// Got runtime error because of integer overflow(even after using long long )
// Will try with another approach tommorrow...




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
class Solution {
public:

    int getsum(long long x, long long y){
        long long nx=0,ny=0;
        while(x>0){
            long long lastdig= x%10;
            nx= (nx*10 + lastdig);
            x=x/10;
        }
         while(y>0){
            long long lastdig= y%10;
            ny= (ny*10 + lastdig);
            y=y/10;
        }
    
        return nx+ny;


    }

    void insatTail(ListNode* & tail,ListNode* &head, int d){
        ListNode* newNode= new ListNode(d);
        if(tail==nullptr){
            tail= newNode;
            head=newNode;
        }
        else{
            tail->next= newNode;
            tail=newNode;
        }

    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        long long x=0,y=0;
        ListNode* temp = l1;
        while(temp!=nullptr){
            x= ((x*10) +temp->val);
            temp= temp->next;
        }
        temp= l2;
        while(temp!=nullptr){
            y= ((y*10) +temp->val);
            temp= temp->next;
        }
        ListNode* tail = nullptr;
        ListNode* head = nullptr;
        long  long   res= getsum(x,y);
        if(res==0) return new ListNode();
        while(res>0){
            insatTail(tail,head,res%10);
            res= res/10;
        }
        return head;

    }
};