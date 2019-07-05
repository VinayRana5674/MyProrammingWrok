#include<bits/stdc++.h>
using namespace std;
typedef int ii;
#define rep(i,n) for(i=0;i<n;i++)
struct Node
{
	int data;
	Node * next;
	
};
Node *insert(Node *head,int data)
{	
	Node *temp=new Node;
	temp->data=data;
	int arr[5]={0,0};
	temp->next=NULL;
	Node *traverse=new Node;
	traverse=head;
	if(traverse==NULL)
	{	head=temp;
		temp=NULL;
		
	}
	else
	{
		while(traverse->next!=NULL)
		{
			traverse=traverse->next;
			
		}
		traverse->next=temp;
		
	}
	return head;
}
void display(Node *head)
{
	Node *temp=new Node;
	Node *reverse=new Node;
	reverse=head;
	temp=head;
	if(temp==NULL)
	{
		cout<<"\nNo pointer to Point";
	}
	else
	{
		while(temp!=NULL)
		{
			cout<<temp->data<<"  ";
			temp=temp->next;
		}
	}
	cout<<"\nreverse order using Recursion";
	// recursive call to save memory stack
	if(reverse==NULL)
	{
		return;
	}
	display(reverse->next);
	cout<<reverse->data<<"  ";
}
int main()
{
	Node *head=NULL;
	ii n,i=0;
	cin>>n;
	rep(i,n)
	{
		int x;
		cin>>x;
		head=insert(head,x);
	}
	display(head);
}
