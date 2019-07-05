/* Deleting a node from Binary search tree */
#include<iostream>
using namespace std;
struct Node {
	int data;
	struct Node *left;
	struct Node *right;
};
//Function to find minimum in a tree. 
Node* FindMin(Node* root)
{
	while(root->left != NULL) root = root->left;
	return root;
}

// Function to search a delete a value from tree.
struct Node* Delete(struct Node *root, int data) {
	if(root == NULL) return root; 
	else if(data < root->data) root->left = Delete(root->left,data);
	else if (data > root->data) root->right = Delete(root->right,data);
	// Wohoo... I found you, Get ready to be deleted	
	else {
		// Case 1:  No child
		if(root->left == NULL && root->right == NULL) { 
			delete root;
			root = NULL;
		}
		//Case 2: One child 
		else if(root->left == NULL) {
			struct Node *temp = root;
			root = root->right;
			delete temp;
		}
		else if(root->right == NULL) {
			struct Node *temp = root;
			root = root->left;
			delete temp;
		}
		// case 3: 2 children
		else { 
			struct Node *temp = FindMin(root->right);
			root->data = temp->data;
			root->right = Delete(root->right,temp->data);
		}
	}
	return root;
}
 
//Function to visit nodes in Inorder
void Inorder(Node *root) {
	if(root == NULL) return;
 
	Inorder(root->left);       //Visit left subtree
	printf("\n%d  address%d    %d",root->data,root->left,root->right);  //Print data
	Inorder(root->right);      // Visit right subtree
}
 
// Function to Insert Node in a Binary Search Tree
Node* Insert(Node *root,char data) {
	if(root == NULL) {
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if(data <= root->data)
		root->left = Insert(root->left,data);
	else 
		root->right = Insert(root->right,data);
	return root;
}
int sumofallnode(Node *root)
{
	if(root==NULL)
	{
		return 0;
	}
	else
	{
		cout<<"\nroot-> data is now "<<root->data;
			int x=(root->data+sumofallnode(root->left)+sumofallnode(root->right));
		cout<<"\ncame to the end";
		return x;
	}
}

int findheight(Node * root)
{
	if(root==NULL)
	{
	cout<<"\nCame to exit condition";
	return -1;
}
cout<<"\n call executed for "<<root->data;
	return max(findheight(root->left),findheight(root->right))+1;
}
int sumofleaf(Node *root,int *sum)

{
	if(root)
	{
	
	sumofleaf(root->left,sum);
	if(root->left==NULL && root->right==NULL)
	{
	*sum=*sum+root->data;
	
	}
	sumofleaf(root->right,sum);
}
}
int intializesum(Node*root)
{
	int sum=0;
	leftleavesum(root,0,&sum);
	return sum;
}
void leftleavesum(Node *root, bool isleft,*sum)
{
if(!root)
	return;
	if(root->left==NULL && root->right==NULL && isleft)
	{
		*sum=*sum+root->data;
		
	}
	leftleavesum(root->left,1,sum);
	leftleavesum(root->right,0,sum);
}

void rightleavesum(Node* root,bool isright,*sum)
{
	if(!root)
	return;
	if(root->left==NULL && root->right==NULL && isright)
	{
		*sum+=root->data;
	}
	rightleavesum(root->left,0,sum);
	rightleavesum(root->right,1,sum);
}

int main() {
	/*Code To Test the logic
	  Creating an example tree
	                    5
			   / \
			  3   10
			 / \   \
			1   4   11
    */
	Node* root = NULL;
/*	root = Insert(root,5); root = Insert(root,10);
	root = Insert(root,3); root = Insert(root,4); 
	root = Insert(root,1); root = Insert(root,11);
 root = Insert(root,18);
 root = Insert(root,20);*/
 root = Insert(root,11);
 root = Insert(root,18);
 root = Insert(root,20);
  root = Insert(root,1);

	// Deleting node with value 5, change this value to test other cases


	//Print Nodes in Inorder
	cout<<"Inorder: ";
	Inorder(root);
	cout<<"\n";

	int sum=sumofallnode(root);
		cout<<"\nSUm is"<<sum;
	int height=findheight(root);
	cout<<"\nHeight is "<<height;
	int summ=0	;
	sumofleaf(root,&summ);
	cout<<"\nsum of leaf noode is "<<sum;
}
