#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node* next;

};
Node* insert(Node* root, int data)
{
	Node* newnode = new Node;
	newnode->data = data;
	newnode->next = NULL;
	if (root == NULL)
	{
		root = newnode;
	}
	else
	{
		insert(root->next,data);
	}
	return root;
}

void traverse(Node* root)
{
	if(root==NULL)
		{
		cout << "\nLinked list is empty";
		}
	else
	{
		cout << "\n" << root->data;
		root = root->next;
	}
}

int main()
{
	Node* root = NULL;
	int n;
	cin >> n;
	int data;
	for (int i = 0; i < n; i++)
	{
		cin >> data;
		root = insert(root, data);
	}
	traverse(root);
}