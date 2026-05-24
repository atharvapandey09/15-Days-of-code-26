
// Intersection of two LL -->


// brute force -->

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA= headA;
        ListNode * tempB = headB;
        vector<ListNode*>  v;
    while(tempA!=nullptr){
        v.push_back(tempA);
        tempA = tempA->next;

    }
    while(tempB!=nullptr){
        for(auto k:v){
            if(k== tempB) return tempB;
            else  continue;
        }
        tempB = tempB->next;
    }

    return NULL;
    }
};