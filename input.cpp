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
		root->next = insert(root->next, data);
	}
	return root;
}

void traverse(Node* root)
{
	if (root == NULL)
	{
		cout << "\nLinked list is empty";
	}
	else
	{
		cout << "\n" << root->data;
		traverse(root->next);
	}
}
void reverseprint(Node* root)
{
	if (root == NULL)
	{
		return;
	}
	reverseprint(root->next);
	cout << "\n" << root->data;
}
void actualreverse(Node** root)
{
	Node* current = new Node;
	Node* prev = new Node;
	Node* next = new Node;
	current = *root;
	prev = NULL;
	next = NULL;
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;

	}
	*root = prev;

}
Node* actualreverserecu(Node* root)
{
	if (root == NULL || root->next == NULL)
	{
		return root;
	}
	Node* temp = actualreverserecu(root->next);
	root->next->next = root;
	root->next = NULL;
	return temp;
}
void sumoddfreq(Node* root)
{
	map<int, int> m;
	Node* temp = new Node;
	temp = root;
	while (temp != NULL)
	{
		m[temp->data]++;
		temp = temp->next;

	}
	int sum = 0;
	for (auto i = m.begin(); i!= m.end(); i++)
	{

		if (i->second % 2 != 0)
		{
			sum = sum + i->first * i->second;
		}
	}
	cout << "\nSum odd freq is " << sum;


}
void print(Node* root)
{
	while (root->next != NULL)// always goes till second last 
	{
		cout << "\n " << root->data;
		root = root->next;
	}
}
Node* reverseusingstack(Node* root)
{
	stack <Node*> s;
	Node* ptr = root;
	while (ptr->next != NULL)
	{

		s.push(ptr);
		ptr = ptr->next;

	}
	root = ptr;
	while (!s.empty())
	{
		ptr->next = s.top();
		ptr = ptr->next;
		s.pop();

	}
	ptr->next = NULL;
	return root;
}


Node* insert_norecu(Node* root, int data)
{
	Node* newnode = new Node;
	newnode->data = data;
	newnode->next = NULL;
	Node* temp = new Node;
	temp = root;
	if (temp == NULL)
	{
		root = newnode;
	}
	else
	{

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;

	}
	return root;

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
		root = insert_norecu(root, data);
		//	root = insert(root, data);
	}
	cout << "\n\nSimple traversing";
	traverse(root);
	cout << "\n\nSimple traversing finished";
	//	reverseprint(root);
	//	cout<<"\nreversing in process";
	//	actualreverse(&root);
	//	cout<<"\n\npriting list return after reverse";
	//	traverse(root);
//	cout << "\n\nRecursivetraversing";
//	root = actualreverserecu(root);
//	cout << "\n\nRecursivetraversing finished";
//	traverse(root);
//	sumoddfreq(root);
	root=reverseusingstack(root);
	traverse(root);
	
	
}
