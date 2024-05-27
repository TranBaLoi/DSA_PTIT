#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};

Node *root = NULL;
Node *make_node(int new_data)
{
    Node *n = new Node();
    n->data = new_data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
int main()
{
    Node *root = make_node(1);
    Node *node1 = make_node(2);
    Node *node2 = make_node(3);
    root ->left = node1;
    root->right = node2;
    return 0;
}