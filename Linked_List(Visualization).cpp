#include <iostream>
using namespace std;

class Node{
    public:
        int value;
        Node* Next;
    Node(int val){
        value = val;
        Next = nullptr;
    }
};

int main(){
    //Initialize the nodes
    //N.B: Node* first is the address of the node

    Node* first = new Node(5);
    Node* second = new Node(10);
    Node* third = new Node(15);

    //Link the nodes
    first->Next = second;

    second->Next = third;

    third->Next = nullptr;

    //Printing out the node's address, value and the address of the next node

    cout << "Address of Node 1: "<<first<<"\n";
    cout << "Value of Node 1: "<<first->value<<"\n";
    cout << "Next Node address: "<<first->Next<<"\n";
    cout << ".........................................";
    cout << "\nAddress of Node 2: "<<second<<"\n";
    cout << "Value of Node 2: "<<second->value<<"\n";
    cout << "Next Node address: "<<second->Next<<"\n";
    cout << ".........................................";
    cout << "\nAddress of Node 3: "<<third<<"\n";
    cout << "Value of Node 3: "<<third->value<<"\n";
    cout << "Next Node address: "<<third->Next<<"\n";

    
}