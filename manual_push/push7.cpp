// https://takeuforward.org/plus/data-structures-and-algorithm/beginner-problems/basic-linked-list/insertion-at-the-tail-of-ll

class Solution {
public:
    ListNode* insertAtTail(ListNode* &head, int X) {

        ListNode* hi = new ListNode(X, nullptr);
        ListNode* temp = head;
        // edgecase when head = nullptr
        if(head == nullptr){
            return hi;
        }
        else{
            while(temp -> next != nullptr){
                temp = temp -> next; 
            }

            temp -> next = hi;

        }
        return head;
