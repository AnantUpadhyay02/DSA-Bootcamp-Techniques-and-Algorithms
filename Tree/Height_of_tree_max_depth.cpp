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

int maxDepth(Node*root){
    if(root==NULL)
        return 0;

    int leftHeight = maxDepth(root->left);
    int rightHeight = maxDepth(root->right);

    int ans = max(leftHeight,rightHeight) +1;

    return ans; 
}




int main(){
    Node* root = NULL;
    root = buildTree();

    cout<<" the max depth of the tree is: "<<maxDepth(root)<<endl;


return 0;
}