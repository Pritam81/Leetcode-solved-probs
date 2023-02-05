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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || k==1 ){
            return head;
        }
        ListNode * dummy=new ListNode(0);
        dummy->next=head;
        ListNode * pre=dummy;
        ListNode * cur;
        ListNode * nex;
        int count=0;
        while(head){
            count++;
            head=head->next;
        }
        while(count>=k){
          cur = pre->next;  
           nex= cur->next;
           for(int i=1;i<k;i++){
               cur->next=nex->next;
               nex->next=pre->next;
               pre->next=nex;
               nex=cur->next;
           }
           count=count-k;
           pre=cur;

        }
        return dummy->next;

        
         }


};