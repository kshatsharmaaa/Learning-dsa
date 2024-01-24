#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d) {                           //constructor
        this -> data = d;
        this -> prev = NULL;                //starting me
        this -> next = NULL;
    }

    ~Node(){                                            //  destructor
        int value = this ->data;
        if(this -> next != NULL){                       // memeory free
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for the node with value " << value <<endl;
    }
};

void print(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout<< temp -> data <<" ";         //temp ke data ko print karate jao
        temp = temp->next;                 //temp ko aage badhate jao
    }
    cout<<endl;
}

int getLength(Node* head) {
    int len = 0;
    Node* temp = head;

    while(temp != NULL) {
        len++;
        temp = temp->next;                 
    }
    return len;
}

void insertAtHead(Node* &head, Node* &tail, int d) {
    if(head == NULL){                       //empty list
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }else{
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }    
}

void insertAtTail(Node* &head, Node* &tail, int d) {
    if(tail == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }else{
        Node* temp = new Node(d);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node* &head,Node* &tail, int position, int d) {
    

    if(position == 1){                          //insert at start
        insertAtHead(head,tail, d);
        return;
    }

    Node* temp = head;                          //temp bnaya jo starting me head ko darshara
    int cnt = 1;                                //current position

    while(cnt < position - 1){
        temp = temp -> next;                    //temp ko aage badhate rho
        cnt++;
    }

    if(temp -> next == NULL){                   //for insertion at last pos
        insertAtTail(head,tail,d);
        return;
    }

    Node* nodeToInsert = new Node(d);            // insert at middle
    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;               //prev and next pointer ka connection ho gya hai
}

void deleteNode(int position, Node* &head) {
    if(position == 1){                      //deleting start node
        Node*temp = head;                   
        temp -> next -> prev = NULL;
        head = temp -> next;                
        temp-> next =NULL;                 //pointer hatado jisko delete krre usee
        delete temp;                       //memory free --destructor

    }else{                                  //deleting any middle or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;                           //delete memory for current node

    }
}

int main()
{
    // Node* node1 = new Node(10);            //hatadi null se start krne k lie
    Node* head = NULL; //node1;
    Node* tail = NULL; //node1;

    print(head);

    cout<< "Length of linked-list : " << getLength(head) <<endl; 

    insertAtHead(head, tail, 11);
    print(head);

    insertAtTail(head, tail, 25);
    print(head);

    insertAtPosition(head, tail, 3, 69);
    print(head);

    insertAtPosition(head, tail, 4, 93);
    print(head);
    
    deleteNode(3, head);
    print(head);
}