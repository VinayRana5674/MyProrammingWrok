#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node* next;
};
class List
{
	Node* head, * tail;
public:
	List()
	{
		head = NULL;
		tail = NULL;

	}
	void addnodeatend(int);
	void transverse();
	void insertnodeatbeg(int);
	void insertatposition();
	void deleteatfirst();
	void deleteatgivenposition();
	void search();
	void elementaccessfromlast();
	void fun1(Node* head);

};
void List:: fun1(struct Node* head)
	{
		Node* temp=new Node;
		temp=head;
		if (temp== NULL)
			return;

		fun1(temp->next);
		cout<<"  ", temp->data;
	}


void List::elementaccessfromlast()
{
	Node* temp = new Node;
	temp = head;
	Node* temp2 = new Node;
	temp2 = head;
	int count = 0;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;

	}
	cout<<"\ncount is:-"<<count;
	int pos=count;
	cout << "\n\n\nVector assignment to linked list seq is:-";
	int n;
	cin >> n;
	for (int i = 1; i <= (pos - n ); i++)
	{
		temp2 = temp2->next;
	}
	cout<<"\nData of element " << n <<" from last is:-" << temp2->data;
}
void List::search()
{
	cout << "\nEnter the value you want to Search:-";
	int val;
	cin >> val;
	int pos = 0,flag=0;
	Node* temp = new Node;
	temp = head;
	if (temp == NULL)
	{
		cout << "\nNothing to search list is empty";
	}
	while (temp != NULL)
		{
		pos++;
		if (temp->data == val)
			{
			cout << "\nElement found at- " << pos << " Position";
			flag = 1;

			}
		temp = temp->next;
		}
	if (flag == 0)
	{
		cout << "\nElement not found";
	}

}
void List::deleteatfirst()
{
	Node* temp = new Node;
	temp = head;
	if (head == NULL)
	{
		cout << "\nUnderflow";
	}
	else
	{
		head = head->next;

	}
}
void List::deleteatgivenposition()
{
	cout << "\nENter the pos from you want to delete element";
	int pos;
	cin >> pos;
	Node* temp = new Node;
	Node* temp2 = new Node;
	temp2 = head->next;
	temp = head;
	if (pos == 1)
	{
		List::deleteatfirst();
	}
	int i;
	for (i = 2; i < pos; i++)
	{
		temp = temp->next;
		temp2 = temp2->next;
	}
	temp->next = temp2->next;

 




}
void List::insertatposition()
{
	int value, pos;
	cout << "\nEnter the value";
	cin >> value;
	cout << "\nEnter the position";
	cin >> pos;
	Node* temp = new Node;
	temp->data = value;
	temp->next = NULL;
	Node* transverse = new Node;
	transverse = head;
	if (pos == 1)
	{
		List::insertnodeatbeg(value);
	}
	for (int i = 2; i <= pos - 1; i++)
	{
		transverse = transverse->next;
		/*	if (transverse == NULL) optional statements
			{
				break;
			}*/

	}
	//	if (transverse != NULL)
	//	{
	temp->next = transverse->next;
	transverse->next = temp;
	//	}

}



void List::addnodeatend(int value)
{
	Node* temp = new Node;
	temp->data = value;
	temp->next = NULL;
	if (head == NULL)
	{
		head = temp;
		tail = temp;
		temp = NULL;
	}
	else
	{
		tail->next = temp;
		tail = temp;
		temp = NULL;
	}

}
void List::transverse()
{
	Node* temp = head;
	while (temp != NULL)
	{

		cout << temp->data << endl;
		temp = temp->next;

	}
}
void List::insertnodeatbeg(int value)
{
	Node* temp = new Node;
	temp->data = value;
	temp->next = NULL;
	if (head == NULL)
	{
		head = temp;
		tail = temp;
		temp = NULL;
	}
	else
	{
		temp->next = head;
		head = temp;

	}

}
int main()
{
	List mylist;
	for (int i = 1; i <= 10; i++)
	{
		mylist.addnodeatend(i);
	}
	mylist.transverse();
	mylist.fun1(Node *head);
	/*int n;
	cout << "\n\nEnter the node you want to enter at first location";
	cin >> n;
	mylist.insertnodeatbeg(n);
	mylist.transverse();
	cout << "\n\nEnter the node you want to enter at first location";
	cin >> n;
	mylist.insertnodeatbeg(n);
	mylist.transverse();
	//system(pause);
	mylist.insertatposition();
	mylist.transverse();
	mylist.deleteatfirst();
	cout << "\nAfter Deletion list is";
	mylist.transverse();
	mylist.deleteatgivenposition();
	mylist.transverse();
	mylist.deleteatgivenposition();
	mylist.transverse();
	mylist.transverse();
	mylist.search();
	mylist.search();*/

	//mylist.elementaccessfromlast();
	//mylist.transverse();

	return 0;
}

