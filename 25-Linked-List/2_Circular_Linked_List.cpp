#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this->data = data;
        prev = next = NULL;
    }
};

class DoublyLinkedList {
public:
    Node* head;
    Node* tail;

    DoublyLinkedList(){
        head = tail = NULL;
    }

    void push_front(int data){
        Node* newNode = new Node(data);

        if(head == NULL){
            head = tail = newNode;
            return;
        }else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    //push/insert at the end
    void push_back(int data){
        Node* newNode = new Node(data);

        if(newNode == NULL){
            head = tail = newNode;
            return;
        }else{
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    //delete from the front/start
    void pop_front(){
        //Linked List has no node
        if(head == NULL){
            cout <<"Empty Linked List/n";
            return;
        }

        Node* temp = head;

        //only one node
        if(head == tail){
            head = tail = NULL;
        }else{
            head = head->next;
            head->prev = NULL;
            temp->next = NULL;
        }

        delete temp;
    }

    //delete from the end of the linked list
    void pop_back(){
        if(head == NULL){
            cout << "Empty Linked List\n";
            return;
        }

        Node* temp = tail;

        if(head == tail){   //only one node present at the linked list
            head = tail = NULL;
        }else{
            tail = tail->prev;
            tail->next = NULL;
            temp->next = NULL;
        }

        delete temp;
    }

    //print forward
    void printLL(){
        Node* temp;
        temp = head;

        while(temp != NULL){
            cout << temp->data << "<=>";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    //print backward
    void printBackward(){
        Node* temp = tail;
        cout << "\nBackward print:\n";
        while(temp != NULL ){
            cout << temp->data << "<=>";
            temp = temp->prev;
        }
        cout << "NULL";
    } 


};

int main(){
    DoublyLinkedList ll;

    //push/insert at the begining
    ll.push_front(11);                                                     
    ll.push_front(22);                                                    
    ll.push_front(33);     
    
    //print after insert at the begining
    cout << "print after insert at the begining:\n";
    ll.printLL();

    //push_back/insert at the end
    ll.push_back(123);
    ll.push_back(124);
    ll.push_back(125);
    ll.push_back(126);
    ll.push_back(127);

    //print after insert at the begining
    cout << "print after insert at the end:\n";
    ll.printLL();

    //print after delete element from the front
    ll.pop_front();
    cout << "print after delete element from the front\n";
    ll.printLL();

    //print after delete element from the end/back
    ll.pop_back();
    cout << "print after delete element from the back\n";
    ll.printLL();

    //print element backward
    ll.printBackward();
    return 0;
}