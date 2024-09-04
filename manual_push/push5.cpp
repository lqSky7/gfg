#https://takeuforward.org/plus/data-structures-and-algorithm/beginner-problems/basic-linked-list/deletion-of-the-kth-element-of-ll

ListNode* deleteKthNode(ListNode* &head, int k) {

        if(k==0){
            return nullptr;
        }
        if(k==1){
            
            //means we're removing head.
            head = head -> next;
            // delete( how to free the memory??)
            return head;
        }
        int cnt = 1;
        ListNode* hi = head;
        ListNode* before_hi = nullptr;

        while(hi != nullptr){
            if(cnt==k){
                before_hi -> next = before_hi -> next -> next;
                delete(hi);
                break; 
            }

            before_hi = hi;
            hi = hi -> next;
            cnt++;
        }
        return head;
    }
};