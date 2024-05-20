#include<bits/stdc++.h>
using namespace std;

struct Node{
    Node * links[26];
    bool flag = false;

    //check if the refereance tries is present or not

    bool containKey(char ch){

        return (links[ch - 'a'] != NULL);
    }

    //Creating reference tries
    void put(char ch, Node * node){
        links[ch-'a'] = node;
    }

    //to get the next node for traversal
    Node* get(char ch){
        return links[ch -'a'];
    }

    void setEnd(){
        flag = true;
    }
    bool isEnd(){
        return flag;
    }

};

class Tries{
    private:
    Node* root;
    public:
    Tries(){
        root = new Node();
    }

    void insert(string word){
        //initializing dummy node pointing to root intially
        Node *node = root;
        for(int i = 0;i< word.size();i++){
            if(!node->containKey(word[i])){
                node->put(word[i],new Node());
            }
            node = node->get(word[i]);
        }
        node->setEnd();

    }

    bool search(string word){
        Node * node = root;
        for(int i = 0;i<word.size();i++){
            if(!node->containKey(word[i])){
                return false;
            }
            node = node->get(word[i]);
        }
        return node->isEnd();
    }

    bool startsWith(string prefix){
        Node* node = root;
        for(int i = 0;i<prefix.size();i++){
            if(!node->containKey(prefix[i])){
                return false;
            }
            node= node->get(prefix[i]);
        }
        return true;
       
    }
};

int main(){

int n = 5;
vector<int> type = {1,1,2,3,2};
vector<string>value = {"hello", "help", "help", "hel", "hel"};
	Tries trie;
	for (int i = 0; i < n; i++) {
		if (type[i] == 1) {
			trie.insert(value[i]);
		}
		else if (type[i] == 2) {
			if (trie.search(value[i])) {
				cout << "true" << "\n";
			}
			else {
				cout << "false" << "\n";
			}
		}
		else {
			if (trie.startsWith(value[i])) {
				cout << "true" << "\n";
			}
			else {
				cout << "false" << "\n";
			}
		}
	}
    return 0;
}