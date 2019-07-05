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

};
void List::insertatposition()
{
	int value, pos;
	cout << "\nEnter the value";
	cin >> value;
	cout << "Enter the positio";
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
	

	}
			
				temp->next = transverse->next;
				transverse->next = temp;
			

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
	int n;
	cout << "\n\nEnter the node you want to enter at first locatio";
	cin >> n;
	mylist.insertnodeatbeg(n);
	mylist.transverse();
	cout << "\n\nEnter the node you want to enter at first locatio";
	cin >> n;
	mylist.insertnodeatbeg(n);
	mylist.transverse();
	//system(pause);
	mylist.insertatposition();
	mylist.transverse();
	return 0;
}

