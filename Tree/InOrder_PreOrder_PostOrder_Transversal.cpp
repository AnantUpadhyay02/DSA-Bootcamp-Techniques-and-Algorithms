#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;

    }
};

Node* buildTree(){

    int data;
    cout<<"Enter the Data: "<<endl;
    cin>>data;

    if(data == -1){
        return NULL;
    }

    // A B C Steps

    Node * root = new Node(data);

    cout<<"Enter the data for left child "<<data<<" node "<<endl;

    root->left = buildTree();
    cout<<"Enter the data for right child "<<data<<" node "<<endl;
    root->right = buildTree();

    return root;
}

void inOrderTransversal(Node*root){
    // base case
    if(root == NULL){
        return;
    }

    // LNR
    inOrderTransversal(root->left);
    cout<<root->data<<" ";

    inOrderTransversal(root->right);

    cout<<endl;

}

void Preorder(Node*root){
    // Base case
    if(root == NULL)
        return;

    // NLR
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
    cout<<endl;
}

void postOrder(Node*root){
    // Base case
    if(root == NULL){
        return;
    }

    // LRN
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
    cout<<endl;
}

int main(){
    Node* root = NULL;
    root = buildTree();

    inOrderTransversal(root);
    Preorder(root);
    postOrder(root);
return 0;
}