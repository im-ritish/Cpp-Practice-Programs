#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

void InsertAtTail(Node* &head, int val)
{
    Node* n = new Node(val);
    if(head==NULL){
        head=n;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void InsertAtHead(Node* &head, int val)
{
    Node* n = new Node(val);
    n->next = head;
    head = n;
}

void display(Node* head)
{
    Node* temp=head;
    while(temp != NULL){
        cout << temp->data <<"->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Iterative Way
Node* reverse(Node* head)
{
    Node* prevptr=NULL;
    Node* currptr=head;
    Node* nextptr;

    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
    }

    return prevptr;
}

//Recursive Way 
Node* reverseRecursive(Node* &head)
{
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* newhead = reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;

    return newhead;
}

int main()
{
    Node* head = NULL;
    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    InsertAtTail(head,4);
    display(head);
    Node* newhead= reverseRecursive(head);
    display(newhead);
    return 0;
}