#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left,* right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};

int widthOfBinaryTree(Node* root){

if(!root){
    return 0;

}
int ans = 0;
queue<pair<Node* ,int>> qu;
qu.push({root,0});
while(!qu.empty()){
int size = qu.size();
int curMin = qu.front().second;
int leftmost,rightmost;

for(int i = 0;i<size;i++){
    int cur_id = qu.front().second - curMin;
    Node* temp = qu.front().first;
    qu.pop();

    if(i == 0){
        leftmost = cur_id;

    }
    if(i == size-1){
        rightmost = cur_id;
    }
    if(temp->left){
        qu.push({temp->left,cur_id*2 + 1});
    }
    if(temp->right){
        qu.push({temp->right,cur_id*2 + 2});
    }

    ans = max(ans,rightmost-leftmost + 1);
}

}
return ans;
}

int main(){
Node* root = new Node(1);
root->left = new Node(3);
root->left->left = new Node(5);
root->left->left->left = new Node(7);
root->right = new Node(2);
root->right->right = new Node(4);
root->right->right->right = new Node(6);

int maxwindth = widthOfBinaryTree(root);
cout<<"the maximum width of binary tree is "<<maxwindth<<endl;

    return 0;
}