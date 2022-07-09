#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=next;
    }
};
void ihead(Node* &head, int d){
    
Node* temp = new Node(d);
temp->next=head;
head=temp;
}
void ip(Node* &head, int p, int g){
    if(p==1){
        ihead(head,g);
        return;
    }
    Node* temp = head;
    int cnt =1;
    while(cnt<p-1){
       temp = temp->next;
       cnt++;
    }
    Node* nodetoinsert = new Node(g);
    nodetoinsert->next = temp->next;
    temp->next=nodetoinsert;

}

void itail(Node* &tail , int i){
    Node* temp = new Node(i);
    tail->next=temp;
    tail=temp;
    
}

void printlist(Node* n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
        
    }cout << endl;
}

int main()
{
    Node* node1= new Node(10);
   
Node* head = node1;
Node* tail = node1;
  /*  Node* second = NULL;
    Node* third = NULL;
 Node* tail = new Node(20);
    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;*/

    printlist(head);
  
  itail(tail,0);
  printlist(tail);

    itail(tail,15);
  
printlist(tail);
    return 0;
    ip(head, 2, 22);
    printlist(head);
}