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

Node* lowestCommonAncestor(Node* root, Node*p, Node*q){
    if(root==NULL)
            return NULL;
        
        // check for P or Q
        if(root->data == p->data)
            return p;
        if(root->data == q-> data)
            return q;
        Node* leftAns = lowestCommonAncestor(root->left, p, q);
        Node* rightAns = lowestCommonAncestor(root->right, p, q);

        if(leftAns==NULL && rightAns == NULL)
                return NULL;
        else if(leftAns!=NULL && rightAns ==NULL)
                return leftAns;
        else if(leftAns == NULL && rightAns != NULL)
                return rightAns;
        else
            return root;
    
}


int main(){
Node* root = NULL;
    root = buildTree();
    Node*p;
    Node*q;
    lowestCommonAncestor(root,p,q);
return 0;
}