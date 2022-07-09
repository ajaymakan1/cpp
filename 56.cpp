#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
void InsertAtBeginning(Node *&head, int d)
{
    Node *new_node = new Node();
    new_node->data = d;
    new_node->next = head;
    head = new_node;
}
void InsertAtLast(Node *&head, int t)
{
    {
        Node *new_node = new Node();
        Node *temp = head;
        new_node->data = t;
        new_node->next = NULL;
        if (head == NULL)
        {
            head = new_node;
            return;
        }
        else
        {

            while (temp->next != NULL)
                temp = temp->next;
        }
        temp->next = new_node;
        return;
    }
}
void CountNode(Node *&t)
{
    int cnt = 0;
    while (t != NULL)
    {
        t = t->next;
        cnt++;
    }
    cout << "No of nodes in the linked list in : " << cnt << endl;

} /*
 void SearchIndex(Node* &head , int x){
     int count = 0;
     Node* p = head;
     while(p!=NULL){
         if (p->data==x){
         cout <<"Index of the searched number is : " << count <<endl;       }

             p=p->next;
             count++;


        }

 }*/
int SearchIndex(Node* &head, int data)
{

    int index = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->data == data)
        {
           return index;
        }
        temp = temp->next;
        index++;
    }
    return -1;
}
void printlist(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    int n, value, position;
    cout << "Enter the number of elements you have to insert in the linked list : ";
    cout << endl;
    cin >> n;
    cout << "Enter the value and  position of the number : ";
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> value >> position;

        if (position == 0)
        {
            InsertAtBeginning(head, value);
        }
        else
        {
            InsertAtLast(head, value);
        }
    }
    printlist(head);
    CountNode(head);
    int s;
    cout << "Plese enter the number to be seached in the given linked list : ";
    cout << endl;
    cin >> s;
    int index = SearchIndex(head,s);
	cout<<"It is present at "<<index<< endl;

    return 0;
}