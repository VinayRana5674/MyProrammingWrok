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

};
void List::addnodeatend(int value)
{
	Node* temp = new Node;
	temp->data = value;
	temp->next = NULL;
	if (head == NULL)
	{
		head = temp;
		tail= temp;
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
int main()
{
	List mylist;
	for (int i = 1; i <= 10; i++)
	{
		mylist.addnodeatend(i);
	}
	mylist.transverse();
	//system(pause);

	return 0;
}

