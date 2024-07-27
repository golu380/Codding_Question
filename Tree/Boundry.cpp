#include<bits/stdc++.h>
using namespace std;
class Node{

    public:
    int data;
    Node* left, * right;
    Node(int val){
        data  = val;
        left = right = NULL;

    }
};
class Solution{
    public:
    bool isLeaf(Node* root){
        return !root->left && !root->right;
    }

    void addLeftBoundry(Node * root,vector<int> &res){
        Node* curr = root->left;
        while(curr){
            if(isLeaf(curr)){
                res.push_back(curr->data);
            }
            if(curr->left){
                curr = curr->left;
            }else{
                curr = curr->right;
            }
        }
    }
    void addLeaves(Node * root, vector<int> & res){
        if(isLeaf(root)){
            res.push_back(root->data);
            return;
        }
        if(root->left){
            addLeaves(root->left,res);
        }
        if(root->right){
            addLeaves(root->right,res);
        }
    }
    void addRightBoudary(Node* root,vector<int> &res){
        Node * curr = root->right;
        vector<int> temp;
        while(curr){
            if(isLeaf(curr)){
                temp.push_back(curr->data);
            }

            if(curr->right){
                curr = curr->right;
            }else{
                curr = curr->left;
            }
        }
    }

    vector<int> printBoundary(Node * root){
        vector<int> res;
        if(!root){
            return res;
        }

        if(!isLeaf(root)){
            res.push_back(root->data);
        }

        addLeftBoundary(root,res);
        addLeaves(root,res);
        addRightBoundry(root,res);

        return res;
    }
};



int main(){

Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    return 0;
}