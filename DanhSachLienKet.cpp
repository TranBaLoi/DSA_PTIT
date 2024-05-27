#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *next;
};

Node *head = NULL;

void insert(int new_data){
	Node *x = new Node();
	x->data = new_data;
	x->next = head;
	head = x;
}
void Display(){
	Node *ptr;
	ptr = head;
	while(ptr != NULL){
		cout << ptr->data << " ";
		ptr = ptr->next;
	}
}
int main()
{
	insert(3);
	insert(9);
	insert(5);
	Display();
	return 0;
}
