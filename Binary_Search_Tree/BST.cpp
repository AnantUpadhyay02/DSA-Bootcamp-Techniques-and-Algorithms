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
        this -> left = NULL;
        this->right = NULL;
    }
};
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

Node* insertinBST(Node*&root, int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }

    if(root->data>data)
        root->left = insertinBST(root->left, data);

    else
        root->right = insertinBST(root->right, data);

    return root;
}

void takeInput(Node*&root){
    int data;
    // cout<<"Enter the value";
    cin>>data;

    while(data != -1){
        root = insertinBST(root, data);
        cin>>data;
    }

}

int main(){
    Node* root = NULL;
    cout<<"Enter data for NOde "<<endl;
    takeInput(root);

    cout<<"Printing the tree"<<endl;
    levelOrderT(root);
return 0;
}