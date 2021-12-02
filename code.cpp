
#include<iostream>
#include<stack>
#include<queue>
#include<vector>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        data=d;
        left=right=NULL;
    }
};
//returen the root nose of the tree
Node* BuildTree(){
    int data;
    cin>>data;

    if(data==-1){
        return NULL;
    }
    Node* n=new Node(data);
    n->left=BuildTree(); //creates left subtree
    n->right=BuildTree(); // creates right subtree
    return n;
}
void sumNodes(Node* root){
        // Code here
    vector<int>res;
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node* f = q.front();
        q.pop();
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
        res.push_back(f->data);
    }
    for(auto it:res){
        cout<<it<<" ";
    }

    }

int main(){
    Node*root=BuildTree();
    //cout<<height(root);
    sumNodes(root);

    
}