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
        int height;
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
    node *insert(node *t, int x)
    {
        if (t == NULL)
        {
            t = new node;
            t->data = x;
            t->left = t->right = NULL;
            t->height = 0;
        }
        else if (x < t->data)
        {
            t->left = insert(t->left, x);
            if (height(t->left) - height(t->right) == 2)
            {
                if (x < t->left->data)
                {
                    t = singlerightrotate(t);
                }
                else
                {
                    t = doublerightrotate(t);
                }
            }
        }
        else if (x > t->data)
        {
            t->right = insert(t->right, x);
             if (height(t->right) - height(t->left) == 2)
            {
                if (x > t->right->data)
                    t = singleleftrotate(t);
                else
                    t = doubleleftrotate(t);
            }
        }
        t->height = max(height(t->left), height(t->right)) + 1;

        return t;
    }

    node *singlerightrotate(node *&t)
    {
        node *u = t->left;
        t->left = u->right;
        u->right = t;
        t->height = max(height(t->left), height(t->right)) + 1;
        u->height = max(height(t->left), height(t->right)) + 1;
        return u;
    }
    node *singleleftrotate(node *&t)
    {
        node *u = t->right;
        t->right = u->left;
        u->left = t;
        t->height = max(height(t->left), height(t->right)) + 1;
        u->height = max(height(t->left), height(t->right)) + 1;
        return u;
    }
    node *doublerightrotate(node *&t)
    {
        t->left = singleleftrotate(t->left);
        return singlerightrotate(t);
    }
    node *doubleleftrotate(node *&t)
    {
        t->right = singlerightrotate(t->right);
        return singleleftrotate(t);
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

    node *remove(node *t, int x)
    {
        node *temp;
        if (t == NULL)
        {
            return NULL;
        }
        else if (x < t->data)
        {
            t->left = remove(t->left, x);
        }
        else if (x > t->data)
        {
            t->right = remove(t->right, x);
        }
        else if (t->left && t->right)
        {
            temp = findmin(t->right);
            t->data = temp->data;
            t->right = remove(t->right, t->data);
        }
        else
        {
            temp = t;
            if (t->left == NULL)
            {
                t = t->right;
            }
            else if (t->right == NULL)
            {
                t = t->left;
            }
        
        delete temp;
    }
    if (t == NULL)
    {
        return t;
    }
    t->height = max(height(t->left), height(t->right)) + 1;

    if (height(t->left) - height(t->right) == 2)
    {
        if (height(t->left->left) - height(t->left->right) == 1)
            return singleleftrotate(t);

        else
            return doubleleftrotate(t);
    }

    else if (height(t->right) - height(t->left) == 2)
    {

        if (height(t->right->right) - height(t->right->left) == 1)
            return singlerightrotate(t);

        else
            return doublerightrotate(t);
    }
    return t;
}
  

    int height(node* t)
    {
        return (t == NULL ? -1 : t->height);
    }

    int getBalance(node* t)
    {
        if(t == NULL)
            return 0;
        else
            return height(t->left) - height(t->right);
    }

public:
    BST()
    {
        root = NULL;
    }

    void insert(int x)
    {
        root = insert(root , x);
    }

    void remove(int x)
    {
        root = remove(root, x);
    }

    void display()
    {
        inorder(root);
        cout << endl;
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
    t.insert(5);
    t.insert(35);
    t.insert(67);
    t.insert(43);
    t.insert(21);
    t.insert(10);
    t.insert(89);
    t.insert(38);
    t.insert(69);
    t.display();
    t.remove(5);
    t.remove(35);
    t.remove(65);
    t.remove(89);
    t.remove(43);
    t.remove(88);
    t.remove(20);
    t.remove(38);
    t.display();
  
}