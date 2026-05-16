#include<iostream>
#include<string>
using namespace std;

//Node creation class
class Node {
public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList{
public:
    Node* head;
    Node* tail;
    
    LinkedList(){
        //Initially no Node created or present
        head = tail = NULL;
    }

    //Push/add element at front
    void push_front(int data){    //Time Complexity -> O(1)
        //create node
        Node* newNode = new Node(data);  //create dynamic Node object, pass the value to the constructor 

        if(head == NULL){
            //if head == NULL then point the head and tail to the newNode;
            head = tail = newNode;
            return;
        }else{
            //there is one or more node present at the linked list
            // newNode->value = value;  No need to do this, the value assigned to the newNode while dynamically creating newNode object
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int data){    //Time Complexity -> O(1), if there is tail present otherwise O(n)
        //create a new Node
        Node* newNode = new Node(data);

        //if there is no node present then point head and tail to the created newNode(first node)
        if(head == NULL){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void insertIntoSpecificPos(int data, int pos){   //Time Complexity -> O(n)
        Node* temp;
        temp = head;

        //create new node
        Node* newNode = new Node(data);

        //edge case -> if position = 0; then add the node or data at the first positon
        if(pos == 0){
            push_front(data);   //call push_front function
            return;
        }
         
        for(int i = 1; i < pos; i++){
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    //pop front (delete from the begining)
    void pop_front(){           //Time Complexity -> O(1)
        if(head == NULL){
            cout << "Linked List is empltY\n";
            return;
        }

        Node* temp;
        temp = head;

        head = head->next;
        temp->next = NULL;

        delete temp;
    }

    //pop back (delete node from the end of the linked list)
    void pop_back(){        
        /* Fist way:  //Time Complexity -> O(1)
        1. create a temp variable and assign value of head
        2. traverse to the node before the last node
        3. assign the value of 2nd last node's temp->next = NULL
        4. delete the tail node (if used tail pointer)
        5. point tail to the new last node
        */
        if(head == NULL){
            cout << "Linked List is empltY\n";
            return;
        }

        Node* temp;
        temp = head;

        while(temp->next->next != NULL){   //temp->next != tail
            temp = temp->next;
            
        }
        temp->next = NULL;
        delete tail;        //delete tail delete's value the address not the variable
        tail = temp;


        //Second way:   //Time Complexity -> O(n)
        //if we do not have tail as last pinter
        /*
        we need to temporay pointers for second last node and last nodes
        1. assign temp1 = temp2 = head
        2. traverse by using temp2's temp2->next which will point to the last node
        3. update as temp1=temp1->next and temp2=temp1->next (because the temp1 updated previous line) or use temp2 = temp2->next-next
        4. assign NULL value to the second last as temp1->next = NULL;
        5. delete the last node as delete temp2
        */

        // Node* temp1;
        // Node* temp2;   //tail
        // temp1 = temp2 = head;

        // //traverse
        // while(temp2->next != NULL){
        //     temp1 = temp1->next;
        //     temp2 = temp1->next;   //temp1 updated at previous line so no need to write temp1->next->next; we can write also temp2->next->next
        // }

        // temp1->next = NULL;
        // delete temp2;
    }

    //search element or value or node from the Linked list  
    int search_element(int val){    //Time Complexity -> O(n)
        Node* temp;
        temp = head;

        int position = 0;

        if(head == NULL){
            return -1;
        }

        while(temp->next != NULL){
            position++;
            if(temp->data == val){
                return position;
            }else{
                temp = temp->next;
            }
        }

        return -1;
        
    }

    void printLinkedList(){     //Time Complexity -> O(n)
        Node* temp = head;
        
        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }

        cout<<endl <<endl;
    }
};

int main(){
    LinkedList ll;
    //push front
    ll.push_front(44);
    ll.push_front(88);
    ll.push_front(788);
    ll.push_front(89);

    //push back (at the end)
    ll.push_back(111);
    ll.push_back(222);

    //push at a specific position
    ll.insertIntoSpecificPos(999, 2); //data, pos

    //print all the nodes before deletion perform
    cout << "print all the nodes before deletion perform\n";
    ll.printLinkedList();

    //pop front(delete node from the begining)
    ll.pop_front();

    //print all the nodes after deletion perform
    cout << "All the node after pop front perform: \n";
    ll.printLinkedList();

    //pop back (delete node from the end of the linked list)
    ll.pop_back();

    cout << "All the node after pop back perform: \n";
    ll.printLinkedList();

    //search an element at the Linked List
    int search_result = ll.search_element(88);
    if(search_result == -1){
        cout << "Element/value is not present at the linked list: " << search_result << endl;;
    }else{
        cout << "Position or index of the element: " << search_result;
    }

    return 0;
} 