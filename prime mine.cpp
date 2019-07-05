#include <bits/stdc++.h> 
using namespace std; 
  
class node  
{  
    public: 
    int data;  
    node *left, *right;  
};  
  

node* newNode(int data)  
{  
    node* Node = new node(); 
    Node->data = data;  
    Node->left = Node->right = NULL;  
    return (Node);  
}  
  

  

int main()  
{  
    node *root = newNode(1);  
    root->left = newNode(2);  
    root->right = newNode(3);  
    root->left->left = newNode(4);  
    root->left->right = newNode(5);  
    root->right->left = newNode(6);  
    root->right->right = newNode(7);   
    return 0;  
}  
  
