#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
void printlist(Node *n)
{

    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

void push(Node *&head, int nd)
{
    Node *temp = new Node();
    temp->data = nd;
    temp->next = head;
    head = temp;
}
void pushb(Node *&head, int d)
{
    Node *temp = new Node();
    Node *new_node = head;
    temp->data = d;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
        return;
    }
    else
    {

        while (new_node->next != NULL)
            new_node = new_node->next;
    }
    new_node->next = temp;
    return;
}
void pushm(Node *&head, int p, int d)
{
    if (p == 1)
    {
        push(head, d);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < p - 1)
    {
        temp = temp->next;
        cnt++;
    }
    Node *nodetoinsert = new Node();
    nodetoinsert->data = d;
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}

void deletenode(Node *&head, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 12;
    head->next = second;

    second->data = 13;
    second->next = third;

    third->data = 14;
    third->next = NULL;

    printlist(head);
    push(head, 9);
    printlist(head);
    push(head, 8);
    printlist(head);
    push(head, 7);
    printlist(head);
    push(head, 6);
    printlist(head);
    pushb(head, 15);
    printlist(head);
    pushm(head, 5, 10);
    printlist(head);
    pushm(head, 6, 11);
    printlist(head);
    deletenode(head, 2);
    printlist(head);
    return 0;
}