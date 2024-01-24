#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data){                                     //  constructor
        this -> data = data;
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

void insertAtHead(Node* &head, int d){

    Node* temp = new Node(d);                            // creation of new node
    temp -> next = head;                                 // iske next m head ka addr..
    head = temp;                                        // naya jo temp bnaya usko head bnado ab
}

void insertAtTail(Node* &tail, int d){

    Node* temp = new Node(d);                            // creation of new node
    tail -> next = temp;                                 // iske next m new temp ka addr..
    tail = temp;                                  // naya jo temp bnaya usko tail bnado ab
}

void insertAtPosition(Node* &tail, Node* &head,int position, int d){

    if(position == 1){                          //insert at start
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;                          //temp bnaya jo starting me head ko darshara
    int cnt = 1;                                //current position

    while(cnt < position - 1){
        temp = temp -> next;                    //temp ko aage badhate rho
        cnt++;
    }

    if(temp -> next == NULL){                   //for insertion at last pos
        insertAtTail(tail,d);
        return;
    }

    Node* nodeToInsert = new Node(d);            // creation of new node to insert
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
    
}

void print(Node* &head){
    Node* temp = head;                                     //naya temp bnaya traverse krne k lie
    while (temp != NULL) { 
        
        cout << temp->data<<" ";              // printing the elements in linked list.
        
        temp=temp->next;
    }
    cout<<endl;      
}

void deleteNode(int position, Node* &head) {
    if(position == 1){                      //deleting start node
        Node*temp = head;                   //prev head ko store krao
        head = head -> next;                //head aage badhaya
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
        prev -> next = curr -> next;            //skip over the node that we want to delete
        curr-> next = NULL;                 //pointer hatado jisko delete krre usee
        delete curr;                           //delete memory for current node

    }
}

int main()
{
    Node *node1 = new Node(10);                         // creation of node in heap
    // cout << node1->data << endl;
    // cout << node1->next << endl;
//----------------------------------------------------------------------------------
    Node* head = node1;                                 //head pointed to node1
    Node* tail = node1;                                 //single node in starting thatswhy both h and t

    cout<< "printing first node"<<endl;
    print(head);

    cout<<"------------------------------"<<endl;
    cout<< "insertion at head"<<endl;
    insertAtHead(head,12);
    print(head);

    insertAtHead(head,15);
    print(head);

    cout<<"------------------------------"<<endl;
    cout<< "insertion at tail"<<endl;

    insertAtTail(tail,100);
    print(head);

    cout<<"------------------------------"<<endl;
    cout<< "insertion at position"<<endl;

    insertAtPosition(tail,head,3,69);
    print(head);

    insertAtPosition(tail,head,1,9);
    print(head);

    insertAtPosition(tail,head,7,999);
    print(head);

    cout<<"------------------------------"<<endl;

    cout<<"head : "<<head -> data <<endl;
    cout<<"tail : "<<tail -> data <<endl;

    cout<<"------------------------------"<<endl;
    cout<<"Deletion "<<endl;

    deleteNode(3,head);
    print(head);

    deleteNode(1,head);
    print(head);




}