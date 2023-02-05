/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
                int len1,len2;
                ListNode * temp1=headA;
                ListNode * temp2=headB;
                int count=0;
                while(temp1!=NULL){
                    count++;
                    temp1=temp1->next;
                }  
                temp1=headA; 
                len1=count;
                count=0;
                while(temp2!=NULL){
                    count++;
                    temp2=temp2->next;
                }
                len2=count;
                temp2=headB;
                if(len1>len2){
                        int tomove=len1-len2;
                        while(tomove--){
                                temp1=temp1->next;
                        }
                }
                else if(len2>len1){
                        int tomove=len2-len1;
                        while(tomove--){
                                temp2=temp2->next;
                        }
                }
                
                        while(temp1 && temp2){
                            if(temp1==temp2){
                                return temp1;
                            }
                            temp1=temp1->next;
                            temp2=temp2->next;
                        }

                return NULL;
                
    }
};