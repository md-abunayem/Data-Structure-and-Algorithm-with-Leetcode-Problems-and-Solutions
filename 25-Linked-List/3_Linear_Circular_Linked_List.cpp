#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class LCLL{       //Linear Circular Linked List class
public:
    Node* head;
    Node* tail;

    LCLL(){
        head = tail = NULL;
    }

    //insert into the begining/start/front
    void push_front(int data){
        Node* newNode = new Node(data);

        if(head == NULL){
            head = tail = newNode;
            tail->next = newNode;
        }else{
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
    }

    //push at the end
    void push_back(int data){
        Node* newNode = new Node(data);

        if(head == NULL){
            head = tail = newNode;
            tail->next = head;  //tail->next = newNode or tail
        }else{
            tail->next = newNode;
            tail = tail->next;
            tail->next = head;
        }
    }

    //pop front
    void pop_front(){
        if(head == NULL){
            cout << "Empty Linked List\n";
            return;
        };

        Node* temp = head;

        if(head == tail){   // only one node
            head = tail = NULL;
        }else{
            head = head->next;
            tail->next = head;
            temp->next = NULL;
        }

        delete temp;
    }

    //pop back
    void pop_back(){
        if(head == NULL){
            cout << "Empty Linked List\n";
            return;
        }

        Node* temp = head;
        
        if(head == tail){   //only one node
            head = tail = NULL;
            delete temp;
        }else{
           while(temp->next !=tail){
              temp = temp->next;
           }
            temp->next = head;
            delete tail;
            tail = temp;
        }
    }

    //print LL
    void printLL(){
        if(head == NULL){
            cout << "Empty Linked List\n";
        }

        cout << head->data << "->";
        Node* temp = head->next;

        while(temp != tail->next){   //tail->next = head
            cout << temp->data << "->";
            temp=temp->next;
        }

        cout << temp->data <<"\n\n";  //make circle 


        //for showing data we can use do-while loop
        // Node* temp = head;
        // do{
        //     cout << temp->data << "->";
        //     temp = temp->next;
        // }while(temp != head);
        // cout << temp->data;

    }


};

int main(){
    LCLL cll;
    
    //push_front
    cll.push_front(11);
    cll.push_front(12);
    cll.push_front(13);

    //print after push front
    cout << "Print after push front: \n";
    cll.printLL();

    cll.push_back(123);
    cll.push_back(124);
    cll.push_back(125);
    //print after push back
    cout << "Print after push back: \n";
    cll.printLL();

    cll.pop_front();
    //print after pop-front
    cout << "print after pop-front:\n";
    cll.printLL();

    cll.pop_back();
    //print after pop-back
    cout << "print after pop-back:\n";
    cll.printLL();
    return 0;
}