#include <iostream>
using namespace std;

//Declare a custom data type. Node in this instance. *Next is pointer to a data type of type Node
struct Node{
    int data;
    Node *Next;
};

class linked_list{
    Node *head, *tail;

public:
    // Initialization
        linked_list(){
            head = nullptr;
            tail = nullptr;          
        }

        void create_at_end(int value){
            Node *new_node = new Node();
            new_node->data = value;
            new_node->Next = nullptr;

            if(head == nullptr){
                head = tail = new_node;
            }else{
                tail->Next = new_node;
                tail = new_node;
            }
        }

        void create_at_beginning(int value){
            Node *new_node = new Node();
            new_node->data = value;
            new_node->Next = head;
            if(head == NULL){
                head = tail = new_node;
            }else{
                head = new_node;
            }
        }

        

        void display(){
            Node *tmp = head;
            //The last node will point to null and when tmp access null, the loop breaks
            while (tmp != NULL){
                cout << tmp->data << " -> ";
                //Go to the next node
                tmp = tmp->Next;
            }
            
        }
};

int main(){

    linked_list list;

    list.create_at_beginning(2);
    list.create_at_beginning(3);
    list.create_at_beginning(4);
    

    list.create_at_beginning(1);

    list.display();
}