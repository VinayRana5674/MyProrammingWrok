#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node *next;	
};

Node* insert(Node *head,int value)
{
	Node *traverse=new Node;
	traverse=head;
	Node *temp=new Node;
	temp->data=value;
	temp->next=NULL;
	if(traverse==NULL)
	{
		head=temp;
		cout<<"\n As root";
	}
	else
	{
		while(traverse->next!=NULL)
		{
			traverse=traverse->next;
		}
		
		traverse->next=temp;
		cout<<"\nAs other node";
	}
	cout<<"\n\ninsert call finish";
	return head;
}
void display(Node *head)
{
	cout<<"\nDisplay enterd";
	Node *head1=new Node;
	head1=head;
	if(head1==NULL)
	{
		cout<<"\nList is empty";
	}
	else
	{ 
		while(head1!=NULL)
		{
			cout<<head1->data<<"		";
			head1=head1->next;
		}
		
	}
}
void displayreverse(Node *head)
{
	
	if(head==NULL)
	{
		return;
	}
	 displayreverse(head->next);
	cout<<"\n\n\n"<<head->data;
}
void sumofallelement(Node *head)
{
	int sum=0;
	while(head!=NULL)
	{
		sum=sum+head->data;
		head=head->next;
	}
	cout<<"\n\n\n\n"<<sum;
	
}
void printalternatenode(Node *head)
{	
	Node * temp=new Node;
	temp=head;
 int sum=temp->data;
	while(temp!=NULL)
	{
		cout<<temp->data<<"\t\t";
		if(temp->next==NULL)
		{
			return;
		}
			else
			{
			
		temp=temp->next->next;
		sum=sum+temp->data;
		
			}
			
			
	}
	cout<<"\nsum of alternate element is "<<sum;
}
Node* reverseofllrecursive(Node *head)
{
	
	Node* current =new Node;
	Node* prev= new Node;
	Node* next= new Node;
	current=head;
	prev=NULL;
	while(current!=NULL)
	{
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	head=prev;
	return head;
}

int main()
{
	Node *head=NULL;
	Node *head1=NULL;
	int n,value;
	cin>>n;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>value;
		head=insert(head,value);
	}
	int m;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		int x;
		cin>>x;
		head1=insert(head1,x);
	}
	cout<<"\nDidplay element";
	display(head);
	display(head1);
	cout<<"\nDidplay Reverse";
	displayreverse(head);
	cout<<"\nSum of all element";
	sumofallelement(head);
	cout<<"\nPrint all alternate";
	printalternatenode(head);
	cout<<"\nReverse of all using recursibve";
	head=reverseofllrecursive(head);
	cout<<"\nDisplay all";
	display(head);
	
	
}
