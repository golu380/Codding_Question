#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* left, *right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};
void allTraversal(Node* root, vector<int> &pre, vector<int> &in,vector<int> & post){
stack<pair<Node* ,int>> st;
st.push({
    root,
    1
});
if(root == NULL){
    return;
}
while(!st.empty()){
    auto it = st.top();
    st.pop();

    if(it.second == 1){
        pre.push_back(it.first->data);
        it.second++;
        st.push(it);
        if(it.first->left != NULL){
            st.push({it.first->left,1});
        }
    }else if(it.second == 2){
        in.push_back(it.first->data);
        it.second++;
        st.push(it);
        if(it.first->right != NULL){
            st.push({it.first->right,1});
        }

    }else{
        post.push_back({it.first->data});
    }

}
return;
}
vector<int> TopView(Node * root){
    vector<int> ans;
     if(root == NULL){
        return ans;
    }
    queue<pair<Node*,int>> qu;
    map<int,int> mp;
    qu.push({root,0});
    while(!qu.empty()){
        auto it = qu.front();
        Node* node = it.first;
        int line = it.second;
        qu.pop();
        if(mp.find(line) == mp.end()){
            mp[line] = node->data;
        }
        if(node->left != NULL){
            qu.push({root->left,line-1});
        }
        if(node->right != NULL){
            qu.push({root->right,line+1});
        }
    }

    for(auto it: mp){
        ans.push_back(it.second);
    }
return ans;
   
}

vector<int>  ButtomView(Node * root){
    vector<int> ans;
    if(root == NULL){
        return ans;
    }
    queue<pair<Node*,int> > qu;
    map<int,int> mp;
    qu.push({root,0});
    while(!qu.empty()){
        auto it = qu.front();
        Node* node = it.first;
        int line = it.second;
        mp[line] = node->data;
        qu.pop();
        if(node->left != NULL){
            qu.push({node->left,line-1});
        }
        if(node->right != NULL){
            qu.push({node->right,line+1});
        }
    }
    for(auto it : mp){
        ans.push_back(it.second);
    }
    return ans;
    
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
cout<<endl;
vector<int> ans = ButtomView(root);
for(int i = 0; i < ans.size(); i++){
    cout<<ans[i]<<" ";
}
vector <int> answer = TopView(root);
for(auto it : answer){
    cout<<it<<" ";
}
cout<<endl;

vector<int> in,pre,post;
allTraversal(root,pre,in,post);

for(auto it : in){
    cout<<it<<" ";
}
cout<<endl;
for(auto it : pre){
    cout<<it<<" ";
}
cout<<endl;
for(auto it : post){
    cout<<it<<" ";
}
cout<<endl;

    return 0;
}