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
        this->left = NULL;
        this->right = NULL;
    }
};
int findpos(int arr[], int n, int element){
    for(int i = 0;i<n;i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}

Node* buildaTree(int inorder[],int preorder[],int size, int &preindex,int inorderstart, int inorderEnd){

    // Base case
    if(preindex >= size || inorderstart>inorderEnd){
        return NULL;
    }

    // Step A:
    int element = preorder[preindex++];
    Node* root = new Node(element);
    int pos = findpos(inorder,size,element);

    // Step B
    root->left = buildaTree(inorder,preorder,size,preindex,inorderstart, pos-1);

    // Step C
    root->right = buildaTree(inorder,preorder,size,preindex,pos+1,inorderEnd);

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
    int inorder[] = {40,20,50,10,60,30,70};
    int preorder[] = {10,20,40,50,30,60,70};
    int size = 7;
    int preindex = 0;
    int inorderstart =0;
    int inorderend = size-1;

    Node* root = buildaTree(inorder,preorder,size,preindex,inorderstart,inorderend);

    cout<<"Level order transversal "<<endl;

    levelOrderT(root);


return 0;
}