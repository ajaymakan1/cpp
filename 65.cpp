#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

class BST
{

    struct node
    {
        int data;
        node *left;
        node *right;
    };

    node *root;

    void inorder(node *t)
    {
        if (t != NULL)
        {
            inorder(t->left);
            cout << t->data << " ";
            inorder(t->right);
        }
    }
    node *makeempty(node *t)
    {
        if (t == NULL)
        {
            return NULL;
        }
        {
            makeempty(t->left);
            makeempty(t->right);
            delete t;
        }
        return NULL;
    }
    node *insert(int x, node *t)
    {
        if (t == NULL)
        {
            t = new node;
            t->data = x;
            t->left = t->right = NULL;
        }
        else if (x < t->data)
            t->left = insert(x, t->left);
        else if (x > t->data)
            t->right = insert(x, t->right);
        return t;
    }
    node *findmin(node *t)
    {
        if (t == NULL)
        {
            return NULL;
        }
        else if (t->left == NULL)
        {
            return t;
        }
        else
        {
            return findmin(t->left);
        }
    }
    node *findmax(node *t)
    {
        if (t == NULL)
        {
            return NULL;
        }
        else if (t->right == NULL)
        {
            return t;
        }
        else
        {
            return findmax(t->right);
        }
    }
    node *deletenode(node *t, int x)
    {
        node *temp;
        if (t == NULL)
        {
            return NULL;
        }
        else if (x < t->data)
        {
            return deletenode(t->left, x);
        }
        else if (x > t->data)
        {
            return deletenode(t->right, x);
        }
        else if (t->left && t->right)
        {
            temp = findmin(t->right);
            t->data = temp->data;
            t->right = deletenode(t->right, t->data);
        }
        else
        {
            temp = t;
            if (t->left == NULL)
                t = t->right;
            else if (t->right == NULL)
                t = t->left;
            delete temp;
        }

        return t;
    }
    node *find(node *t, int x)
    {
        if (t == NULL)
        {
            return NULL;
        }
        else if (x < t->data)
        {
            return find(t->left, x);
        }
        else if (x > t ->data)
        {
            return find(t->right, x);
        }
        else
        {
            return t;
        }
    }

public:
    BST()
    {
        root = NULL;
    }
    ~BST()
    {
        root = makeempty(root);
    }
    void insert(int x)
    {
        root = insert(x, root);
    }
    void remove(int x)
    {
        root = deletenode(root, x);
    }
    void display()
    {
        inorder(root);
        cout << endl;
    }
    void search(int x)
    {
        root = find(root, x);
    }
    void min(){
        root = findmin(root);
    }
     void max(){
        root = findmax(root);
    }
};
int main()
{
    BST t;
    t.insert(20);
    t.insert(25);
    t.insert(15);
    t.insert(10);
    t.insert(30);
    t.insert(1);
   // t.min();
   // t.max();
    t.display();
    t.remove(20);
    t.display();
    t.remove(25);
    t.display();
    t.remove(30);
    t.display();
    return 0;
}