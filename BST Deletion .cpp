#include<bits/stdc++.h>
using namespace std;
struct BST
{
	int data;
	BST* left = NULL;
	BST* right = NULL;
};
BST* insert(BST* root, int data)
{
	BST* temp = new BST;
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	if (root == NULL)
	{
		root = temp;
	}
	else if (data <= temp->data)
	{
		insert(temp->left, data);
	}
	else
	{
		insert(temp->right, data);
	}
	return root;
}
bool search(BST* root, int data)
{
	if (root == NULL)
	{
		return false;

	}
	else if (data == root->data)
	{
		return true;
	}
	else if (data <= root->data)
	{
		return search(root->left, data);
	}
	else
	{
		return search(root->right, data);
	}

}
int main()
{
	BST* root = NULL;
	std::ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	int x;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		root = insert(root, x);

	}
	int searchvalue;
	cin >> searchvalue;
	if (search(root, searchvalue) == true)
	{
		cout << "\nElement found";
	}
	else
	{
		cout << "\nElement not found";
	}

}