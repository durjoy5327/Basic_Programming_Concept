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
};

int main(){
    LinkedList list;
    list.insert(25);
    list.insert(100);
    list.insert(50);
    list.insert(26);
    list.print();

    return 0;
}