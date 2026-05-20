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


// PALINDROME SINGELY LL
 // brute force

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head==nullptr || head->next== nullptr) return true;
        vector<int> v;
        ListNode* temp = head;
        while(temp!=nullptr){
            v.push_back(temp->val);
            temp= temp->next;
        }
        int i=0,j=v.size()-1;
        while(i<=j){
            if(v[i]!=v[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};