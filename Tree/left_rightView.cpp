#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*  left, *right;
   

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;

    }

};
void leftView(Node * root , int level , vector<int>  &ans){
cout<<level<<endl;
if(root == NULL){
    return;
}
if(level == ans.size()){
    ans.push_back(root->data);
}

leftView(root->left,level+1,ans);
leftView(root->right,level+1, ans);
}
void rightView(Node * root, int level, vector<int> &ans){
    if(root == NULL){
        return;
    }
    if(level == ans.size()){
        ans.push_back(root->data);
    }
    rightView(root->right,level+1, ans);
    rightView(root->left,level+1, ans);
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
Node * root = new Node(10);
root->left = new Node(20);
root->right = new Node(30);
root->left->left = new Node(40);
root->left->right = new Node(60);
inorder(root);
cout<<endl;
vector<int> answer;
leftView(root,0,answer);;
for(int i = 0;i<answer.size();i++){
    cout<<answer[i]<<" ";
}
cout<<endl;
vector<int> ans;

rightView(root,0,ans);
for(auto i : ans){
    cout<<i<<" ";
}

    return 0;
}