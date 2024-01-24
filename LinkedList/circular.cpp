#include <iostream>
#include<map>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    { //  constructor
        this->data = d;
        this->next = NULL;
    }

    ~Node()
    { //  destructor
        int value = this->data;
        if (this->next != NULL)
        { // memeory free
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for the node with value " << value << endl;
    }
};

void insertNode(Node* &tail, int element, int d)
{
    if (tail == NULL)
    { // empty list
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else // non empty list
    {    // assumming element is present in list
        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        } // loop k bahar mtb element milgya

        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node *tail)
{

    Node *temp = tail;

    if(tail == NULL){
        cout<<"List is empty"<<endl;
    }

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout<< endl;
}

void deleteNode(Node* &tail, int value) {
    if(tail == NULL) {              //empty list
        cout << "List is empty, please check again" <<endl;
        return;
    }
    else{                           //assuming value is present
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value) {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;
        if(curr == prev){           //1node
            tail = NULL;
        }
                                    //>=2 node
        else if(tail == curr){           //agar tail koi delete krna ho
            tail = prev;            //updation
        }
        curr -> next = NULL;
        delete curr;
    }
}

bool isCircularList(Node* head) {
    if(head == NULL){               //empty list
        return true;
    }

    Node* temp = head -> next;
    while(temp != NULL && temp != head){
        temp = temp -> next;
    }
    if(temp == head){
        return true;
    }

    return false;


}

bool detectLoop(Node* head){
    if(head == NULL){
        return false;
    }

    map <Node*, bool> visited;              //key, value

    Node* temp = head;                      //to traverse

    while(temp!= NULL){

        //cycle is present
        if(visited[temp] == true){ //agar pehle se true marked hai mtlb loop hai
            cout << "present on element "<< temp ->data << endl;
            return true;
        }

        visited[temp] = true;
        temp = temp ->next;
    }

    return false;
}

Node* floydDetectLoop(Node* head) {
    if(head == NULL)
        return NULL;

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }

        slow = slow -> next;

        if(slow == fast){
            cout<< "present at "<<slow -> data<<endl;
            return slow;
        }
    }
    return NULL;
}

Node* getStartingNode(Node* head){
    if(head == NULL)
        return NULL;
    
    Node* intersection = floydDetectLoop(head);
    Node* slow = head;

    while(slow != intersection){
        slow = slow -> next;
        intersection = intersection -> next;
    }

    return slow;
}

void removeLoop(Node* head) {
    if(head == NULL){
        return;
    }

    Node* startOfLoop = getStartingNode(head);
    Node* temp = startOfLoop;

    while(temp -> next != startOfLoop){
        temp = temp -> next;
    }
    temp -> next = NULL;
}

int main()
{
    Node *tail = NULL;

    insertNode(tail, 5, 3); // empty list
    print(tail);

    insertNode(tail, 3, 11); 
    print(tail);

    insertNode(tail, 11, 27); 
    print(tail);

    insertNode(tail, 27, 9); 
    print(tail);

    insertNode(tail, 3, 6); 
    print(tail);

    // deleteNode(tail,3);
    // print(tail);

    if(isCircularList(tail)){
        cout << "The given linked list is circular"<<endl;
    }else{
        cout << "The given linked list is not circular"<<endl;
    }

    if(detectLoop(tail)){
        cout << "cycle is present" <<endl;
    }else{
        cout << "no cycle detected" << endl;
    }

    if(floydDetectLoop(tail) != NULL){
        cout << "floyd cycle is present" <<endl;
    }else{
        cout << "no cycle detected" << endl;
    }

    // Node* loop = getStartingNode(head);
    // cout << "start node of the loop: " << loop << endl;
}