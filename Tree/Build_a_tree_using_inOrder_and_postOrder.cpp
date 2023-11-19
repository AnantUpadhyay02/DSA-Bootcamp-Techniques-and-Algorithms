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

Node* buildaTree(int inorder[], int postorder[], int &postIndex,int size, int inorderStart, int inorderEnd){
    // Base case
    if(postIndex<0 || inorderStart>inorderEnd){
        return NULL;
    }
    // Step A

    int element = postorder[postIndex];
    postIndex--;

    Node* root = new Node(element);

    int pos = findpos(inorder, size,element);

    // step B: root-> right solve 

    root->right = buildaTree(inorder, postorder,postIndex,size,pos+1,inorderEnd);

    // root->left solve

    root->left = buildaTree(inorder, postorder,postIndex,size,inorderStart,pos-1);

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
    int inorder[] = {40,20,10,50,30,60};
    int postorder[] = {40,20,50,60,30,10};
    int size = 6;
    int postIndex = size-1;
    int inorderStart =0;
    int inorderEnd = size-1;

    Node*root = buildaTree(inorder,postorder, postIndex, size, inorderStart, inorderEnd);
    cout<<"Level order transversal "<<endl;

    levelOrderT(root);



return 0;
}