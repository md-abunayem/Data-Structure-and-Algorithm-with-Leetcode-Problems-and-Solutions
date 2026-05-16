 #include<iostream>
 using namespace std;

 class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class LL{
public:
    Node* head;
    Node* tail;

    LL(){
        head = tail = NULL;
    }
    
    void createLL(int data){    //insert back
        Node* newNode = new Node(data);

        if(head == NULL){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }                              
    }

    Node* reverseLL(){
        Node* prev;
        Node* current;
        Node* next;

        if(head == NULL){
            return head;
        }else if (head->next == NULL){
            return head;
        }else{
            current = head;
            prev = NULL;
            next = NULL;

            while(current != NULL){
                next = current->next;
                current->next = prev;
                prev = current;
                current = next;
            }
            head = prev;
            return head;
        }

    }

    //print linkedlist
    void printLL(){
        Node* temp;
        temp = head;
        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
    }
 };


 int main(){
    LL ll;
    ll.createLL(11);
    ll.createLL(22); 
    ll.createLL(33); 

    //print 
    ll.printLL();

    //after reverse
    ll.reverseLL();
    cout << "After reverse: ";
    ll.printLL();
 }