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
ListNode * rev(ListNode * mid){
                ListNode * curr=mid;
                ListNode * pre=NULL;
                ListNode * after=NULL;
                while(curr){
                    after=curr->next;
                    curr->next=pre;
                    pre=curr;
                    curr=after;


                }
                return pre;
}       
    bool isPalindrome(ListNode* head) {
        bool ans=true;;
        ListNode * fast=head;
        ListNode * slow=head;
    
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;;
        }
       ListNode * mid= slow;
       ListNode * NewHead=rev(mid->next);

       while(head && NewHead){
           if(head->val != NewHead->val){
                ans= false;
                break;
           }
          
              head=head->next;
              NewHead= NewHead->next;
          
       }
       return ans;;

    }
};