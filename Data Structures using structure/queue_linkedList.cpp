#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
};
node *head=NULL, *tail=NULL;
void insert(int data){
    if(head==NULL){
        head= new node();
        head->data= data;
        head->next= NULL;
        tail= head;
    }
    else{
        node* new_node= new node();
        new_node->data= data;
        new_node->next= NULL;
        tail->next= new_node;
        tail= tail->next;
    }
}
void deletion(){

    if(head==NULL){
        cout<<"Queue underflow\n";
    }
    else{
        node* temp= head;
        head= head->next;
        delete(temp);

    }
}
void print(){
    node* new_node=head;
    while(new_node!=NULL){
        cout<<new_node->data<<endl;
        new_node= new_node->next;
    }
}
int main(){
    cout<<"Enqueue:\n";
    insert(25);
    insert(26);
    insert(27);
    insert(28);
    insert(29);
    print();
    deletion();
    cout<<"After Dequeue:\n";
    print();
    return 0;
}