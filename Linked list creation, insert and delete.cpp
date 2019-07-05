#include<bits/stdc++.h>
using namespace std;
struct List
{
	int data;
	List *next;
};
List *head;

void insert(List **head,int value)
{
	List *temp=new List;
	List *traverse=new List;
	traverse=*head;
	temp->data=value;
	temp->next=NULL;
	if(traverse==NULL)
	{
		*head=temp;
		cout<<"\nInsertion done at head node";
	}
	else
	{
		while(traverse->next!=NULL)	
		{
			traverse=traverse->next;
		}
		traverse->next=temp;
		cout<<"\ninsertion done at other location";
	
	}

	
}
void display(List *head)
{
	List *traverse=new List;
	traverse=head;
	while(traverse->next!=NULL)
	{
		cout<<traverse->data;
		traverse=traverse->next;
	}
}
void insertatbeg(List **head,int value)
{
	List *temp=new List;
	temp->data=value;
	temp->next=*head;
	*head=temp;
	
	
}
int main()
{
	head=NULL;
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
	cin>>a[i];
	int value=a[i];
	insert(&head,value);
	cout<<"\nInserting of the element done "<<i<<" time";
    }
	display(head);		
}
