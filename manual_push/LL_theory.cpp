#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int a, Node* b){
        data = a;
        next = b;
    }
    public:
    Node(int a){
        data = a;
        next = nullptr;
    }
};

void display(Node* head, int length) 
{
    if(head-> next == nullptr){
        
        return;
    }

    Node* mover = head; 
    for(int k=0;k<length+1;k++){

        cout<<mover->data<<" ";
        mover = mover->next;
    }
}

int lennn(Node* head){
    int cnt =0;
    Node* mover = head;
    for(int i = 0;;i++){
        if(mover->next != 0){
            cnt++;
            mover = mover->next;

        }
        else{
            cout<<cnt<<endl;
            return cnt;
        }
    }
}



Node* deleteKthNode(Node* &head, int k) {

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
        Node* hi = head;
        Node* before_hi = nullptr;

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
    };































Node* arrToNode(vector<int> &hi){

    Node* head = new Node(hi[0], nullptr);


    Node* mover = head;
    for(int k=1;k<hi.size();k++){
        Node* temp = new Node(hi[k], nullptr);
        mover->next = temp;
        mover = mover->next;
        // we can also do: mover = temp;, they mean exactly the same thing as inside any node, pointer stored is of next element(which we just stored as mover-> next = temp, or we can directly pass the value of temp. they aree exactly the same thing.  )
        
    }
        return head;
}

int main(){
    vector<int> hi = {1,2,3,4};
    Node* hello = arrToNode(hi);
    int length = lennn(hello);
    display(hello, length);
    return 0;
}
