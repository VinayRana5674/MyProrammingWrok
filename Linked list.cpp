#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node * next;
};
Node *head=NULL;
Node *tail=NULL;
void insertnode(Node *head)
{
	Node *temp=new Node;
	Node *headtrack=new Node;
	headtrack=head;
	int data;
	cin>>data;
	temp->data=data;
	temp->next=NULL;
	if(head==NULL)
	{	
		head=temp;
		cout<<"\nInserted as head node";
		tail=temp;
		temp=NULL;
		
	}
	temp->next=head;
	head=temp;
	
	
}
void insertatend(Node *head)
{
	int value;
	cin>>value;
Node* temp = new Node;
	temp->data = value;
	temp->next = NULL;
if(head==NULL)
	{	
			head = temp;
		tail = temp;
		temp = NULL;
		cout<<"\nInserted as head node";
	}
	else
	{
		tail->next = temp;
		tail = temp;
		temp = NULL;
		cout<<"\nInserted as last";
	}
	
	
}
int main()
{
	
	
	insertatend(head);
	insertatend(head);
	insertatend(head);
	
	insertnode(head);
}
