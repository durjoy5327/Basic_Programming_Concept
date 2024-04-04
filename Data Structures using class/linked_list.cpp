#include<bits/stdc++.h>
using namespace std;
class Node{
public:
int data;
Node* next;

//constructor 
Node(){
    data=0;
    next=NULL;
}
//Parameterised Constructor 
Node(int data){
    this->data=data;
    this->next=NULL;
}
};

class LinkedList{
public:

Node* head=NULL;
    
void insert(int data){
    Node* newnode= new Node(data);
    if(head==NULL) {
        head= newnode;
        return;
    }
    Node* temp =head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next= newnode;
}

void print(){
    if(head==NULL){
        cout<<"LinkedList is empty";
        return;
    }
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

//this delete function is use for delete last element
void top(){
        if(head==NULL){
            cout<<"Linked List is empty\n";
            return;
        }
        Node* temp= head;
        Node* secondLast=NULL;
        while(temp->next!=NULL){
            secondLast= temp;
            temp= temp->next;
        }

        if(secondLast== NULL){
        head = NULL;
    } else {
        secondLast->next = NULL;
    }
    delete temp;
    }

//this function is to delete a specific element
    void deleted(int element) {
    if (head == NULL) {
        cout << "Linked List is empty\n";
        return;
    }

    if (head->data == element) {
    Node* temp = head;
    head = head->next;
    delete temp;
    return;
}

    Node* temp = head;
    Node* prev = NULL;

    while (temp != NULL && temp->data != element) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Element not found\n";
        return;
    }
    // If the element is not the last one
    if (temp->next != NULL) {
        prev->next = temp->next;
    } else {
        // If the element is the last one
        prev->next = NULL;
    }

    delete temp;
}

void reverse(){
    if(head==NULL ){
        cout<<"Linked List is empty\n";
    }
    Node* prev = NULL;
    Node* current = head;
    Node* Next = NULL;

    while (current != NULL) {
        Next = current->next; // Store next node
        current->next = prev; // Reverse current node's pointer
        prev = current; // Move pointers one position ahead of the previous node
        current = Next;  // moving forward the current node
    }

    head = prev;
    
}



};

int main(){
    LinkedList list;
    list.insert(25);
    list.insert(100);
    list.insert(50);
    list.insert(26);
    list.print();
    cout<<endl;
    list.deleted(25);
    list.print();
    cout<<endl;
    list.reverse();
    list.print();
    cout<<endl;
    return 0;
}