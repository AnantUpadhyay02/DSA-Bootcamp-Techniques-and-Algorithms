#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node*right;

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

bool KthAncestor(Node*root, int k,int p){
    // Base Case 
    if(root==NULL)
        return false;

    if(root->data == p)
        return true;
    
    bool leftAns = KthAncestor(root->left,k,p);
    bool rightAns = KthAncestor(root->right,k,p);

    if(leftAns || rightAns){
        k--;
    }
    if(k==0){
        cout<<"Answer "<<root->data<<endl;
        k = -1;
    }
    return leftAns || rightAns;

}



int main(){
    Node* root =NULL;
    root = buildTree();
    int k = 1;
    int p = 4;
    KthAncestor(root, k , p);
return 0;
}