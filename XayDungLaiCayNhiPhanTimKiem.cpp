
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

class Node{
public:
	Node* left = nullptr;
	Node* right = nullptr;
	int val;

	Node();
	Node(int val){
		this->val = val;
	}
};
int n;

void bld(Node *&root, int a, int b, char c){
	if(!root) return;
	if(root->val == a){
		if(c == 'L'){
			root->left = new Node(b);
		}else if(c == 'R'){
			root->right = new Node(b);
		}
	}	
	bld(root->left,a,b,c);
	bld(root->right,a,b,c);
}

void buildBST(Node *& root, int val){
	
	if(!root){
		root = new Node(val);
		return;
	}
	
	if(val < root->val)
		buildBST(root->left, val);
	else if(val > root->val)
		buildBST(root->right, val);	
}

void postOrder(Node* root){
	if(root){
		cout << root->val << ' ';
		postOrder(root->left);
		postOrder(root->right);
	}
}

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;

	cin.ignore();
	while(t--){
		int n;
		cin >> n;
		Node* root = nullptr;
		for(int i = 0; i < n; ++i){
			int tmp;
			cin >> tmp;
			buildBST(root, tmp);
		}
		postOrder(root);
		cout << '\n';
	}

	return 0;
}

