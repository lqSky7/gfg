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
};


int main(){
    Node x = Node(4, nullptr);
    Node* y = &x;

    cout << y<<endl; //prints the memory address of x, which is stored in y.
    cout <<y->data<<endl; //prints the data of x, which is 4.
    cout <<y->next<<endl; //prints zero, as the pointer stored was nullptr. 

}
