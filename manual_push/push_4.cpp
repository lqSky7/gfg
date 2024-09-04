//https://takeuforward.org/plus/data-structures-and-algorithm/beginner-problems/basic-linked-list/deletion-of-the-tail-of-ll/editorial

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
// we start iterating using mover = mover ->next, init mover = head. 
// we count length of LL
// then in the end we use that len to change last second element next to nullptr
// then we free last element

class Solution {
public:
    ListNode* deleteTail(ListNode* &head) {
        
        ListNode* mover = head;
        ListNode* mover_back = head;
        int trick = 1;
        if (head == NULL || head->next == NULL)
        return NULL;
        while(mover->next != nullptr){
            if(trick==1){
                trick++;

            }
            else if(trick != 1){mover_back = mover_back -> next;}
            mover = mover ->next;
            
        }

        mover_back -> next = nullptr;
        delete(mover);
        return head;
    // cout<<cnt<<endl;
    }
};
