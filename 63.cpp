#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

struct node
{
    int data;
    struct node *left, *right;
};

struct node *create()
{
    int x;
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));
    cout << "Enter the value : " << endl;
    cin >> x;
    if (x == -1)
    {
        return 0;
    }
    new_node->data = x;
    cout << "Enter the left node of : " << x << endl;
    new_node->left = create();
    cout << "Enter the right node of : "  << x << endl;
    new_node->right = create();
    return new_node;
}

void preorder(node *t) 
{
if(t!=NULL)
{
cout<<t->data<<endl; 
preorder(t->left); 
preorder(t->right); 
}
}
 
int main()
{
    struct node *root;
    root = 0;
    root = create();
    cout<<"The preorder traversal of tree is : "<< endl;
    preorder(root);
    return 0;
}