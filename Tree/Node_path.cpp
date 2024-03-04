#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left,*right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};
bool getPath(vector<int> &ans, int val ,Node* root){
    if(!root){
        return false;
    }

    ans.push_back(root->data);
    if(root->data == val){
        return true;
    }

    return (getPath(ans,val,root->left) || getPath(ans,val,root->right));

}
void printArray(vector<int> & arr){
for(auto i : arr){
    cout<<i<<" ";
}
cout<<endl;
}
void inorder(Node * root){
    if(!root){
        return ;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
Node* root = new Node(1);
root->left = new Node(2);
root->right = new Node(3);
root->left->left = new Node(4);
root->left->right = new Node(5);
root->right->left = new Node(6);
root->right->right = new Node(7);
root->left->right->left = new Node(8);
root->left->right->right = new Node(9);
inorder(root);

vector<int> ans;
cout<<endl;
bool a = getPath(ans,8,root);
printArray(ans);

    return 0;
}