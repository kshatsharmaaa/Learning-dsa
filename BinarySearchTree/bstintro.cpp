#include <iostream>
#include<queue>
using namespace std;

class Node {

    public:
        int data;
        Node* left;
        Node* right;

        Node(int d) {
            this->data = d;
            this->left = NULL;
            this->right = NULL;
        }
};

Node* insertIntoBST(Node* root, int d) {
    //base case
    if(root == NULL) {//toh create kro
        root = new Node(d);
        return root;
    }

    if(d > root->data) //rigt partme insert
        root->right = insertIntoBST(root->right, d);
    else
        root->left = insertIntoBST(root->left, d);

    return root;
}

void takeinput(Node* &root) {
    int data;
    cin>>data;

    while(data != -1) {//jabtk -1 ni dalu tab tk input lete rho
        root = insertIntoBST(root, data);
        cin>>data;
    }
}

//binarytree k creation wale code se uthaya
void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }
}

Node* minVal(Node* root) {
    Node* temp = root;
    while(temp->left != NULL) {
        temp = temp->left;
    }
    return temp;
}

Node* maxVal(Node* root) {
    Node* temp = root;
    while(temp->right != NULL) {
        temp = temp->right;
    }
    return temp;
}

Node* deleteFromBST(Node* root, int val) {
    //base case
    if(root == NULL)
        return NULL;

    if(root->data == val) {
        //0 child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }

        //1 child

            //left child
            if(root->left != NULL && root->right == NULL){
                Node* temp = root->left;
                delete root;
                return temp;
            }

            //right child
            if(root->left == NULL && root->right != NULL){
                Node* temp = root->right;
                delete root;
                return temp;
            }
        //2 child
        if(root->left != NULL && root->right != NULL){
            //right se min val
            int mini = minVal(root->right)->data;
            root->data = mini;
            root->right = deleteFromBST(root->right, mini);//right sei mini nikala toh
            return root;
        }
    }
    else if(root->data > val) {
        root->left = deleteFromBST(root->left, val);
        return root;
    }
    else{
        root->right = deleteFromBST(root->right, val);
        return root;
    }
}

int main() {

    Node* root =NULL;

    cout<< "Enter data to create BST (end with -1) : "<<endl;
    takeinput(root);//it will build tree

    cout<<endl<< "Printing BST : "<<endl;
    levelOrderTraversal(root);

    cout<<endl<< "Min value : "<<minVal(root)->data<<endl;
    cout<<endl<< "Max value : "<<maxVal(root)->data<<endl;

    root = deleteFromBST(root,90);
    cout<<endl<<"After deleting 90: " <<endl;
    levelOrderTraversal(root);

    return 0;
}