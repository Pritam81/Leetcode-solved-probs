/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {

                    Node * clonehead=NULL;
                    Node * clonetail=NULL;
                    Node * temp=head;
                    //copying the orignal node with next ptr
                    while(temp!=NULL){
                      Node *  newnode=new Node(temp->val);
                        if(clonehead==NULL){
                            clonehead=newnode;
                            clonetail=newnode;
                            temp=temp->next;

                        }
                        else{
                            clonetail->next=newnode;
                            clonetail=newnode;
                            temp=temp->next;
                        }

                    }
                    unordered_map<Node*,Node*> oldtonew;
                    Node * original=head;
                    Node * duplicate=clonehead;
                    while(original){
                        oldtonew[original]=duplicate;
                        original=original->next;
                        duplicate=duplicate->next;
                    }
                    Node * temp2=clonehead;
                    while(head){
                            temp2->random=oldtonew[head->random];
                            temp2=temp2->next;
                            head=head->next;
                    }

                    return clonehead;
    }
};