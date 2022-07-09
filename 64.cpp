#include <bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
class Node{
public:
int data;
Node* left;
Node* right;

Node(int value){
    data = value;
     left = NULL;
     right = NULL;
}
};
void preorder(Node *t) 
{
if(t!=NULL)
{
cout<<t->data<<" "; 
preorder(t->left); 
preorder(t->right); 
}
}
void inorder(Node* t){
    if(t!=NULL){
        inorder(t->left);
        cout<<t->data<<" ";
        inorder(t->right);
    }
}
void postorder(Node* t){
    if(t!=NULL){
        postorder(t->left);
        postorder(t->right);
        cout<<t->data<<" ";
    }
}
 
int main(){
Node* root = new Node(1);
root->left= new Node(2);
root->right= new Node(3);
root->left->left= new Node(4);
cout<<"the preorder traversal of the tree is : " ;
preorder(root);
cout<<endl;
cout<<"the inorder traversal of the tree is : " ;
inorder(root);
cout<<endl;
cout<<"the postorder traversal of the tree is : " ;
postorder(root);
return 0; 
}