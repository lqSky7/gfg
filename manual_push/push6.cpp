// https://takeuforward.org/plus/data-structures-and-algorithm/beginner-problems/basic-linked-list/delete-the-element-with-value-x/submissions

/*
Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
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

class Solution {
public:
    ListNode* deleteNodeWithValueX(ListNode* &head, int X) {
        // int cnt = 0;
        if(head==nullptr){
            return head;
        }

        if(head -> val == X){
            ListNode* temp = head;
            head = head->next;
            delete(temp);
            
            return head;
            
        }
        ListNode* hi = head;
        ListNode* hiBefore = nullptr;
        while(hi != nullptr){
            if(hi->val == X){
                hiBefore -> next = hiBefore->next->next;
                delete(hi);
                break;
            }

            hiBefore = hi;
            hi = hi->next;
                        

        }
        return head;
    }
};