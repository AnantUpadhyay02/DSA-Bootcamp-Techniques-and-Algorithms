#include<iostream>
#include<queue>
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

void levelOrderT(Node*root){
    queue<Node*> q;

    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        // Step A
        Node* temp = q.front();
        // Step B
        q.pop(); 

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            // Step C
            cout<<temp->data<<" ";
            // Step D
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }

}
int main(){
    Node* root = NULL;
    root = buildTree();

    levelOrderT(root);
return 0;
}