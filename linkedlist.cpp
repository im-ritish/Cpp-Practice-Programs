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

bool search(Node* head, int key)
{
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void deleteAtHead(Node* &head)
{
    Node* todelete = head;
    head = head->next;

    delete todelete;
}

void deletion(Node* &head, int val)
{
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteAtHead(head);
        return;
    }
    Node* temp = head;
    while(temp->next->data != val){
        temp = temp->next;
    }
    Node* todelete = temp->next;
    temp->next = temp->next->next;  
    delete todelete;
}

int main()
{
    Node* head = NULL;
    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    InsertAtHead(head,4);
    display(head);
    // cout << search(head,5) << endl;
    deletion(head,1);
    display(head);
    return 0;
}