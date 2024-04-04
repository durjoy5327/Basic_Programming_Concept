#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
};
node *root=NULL, *tail=NULL;
void insert(int data){
    if(root==NULL){
        root= new node();
        root->data= data;
        root->next= NULL;
        tail= root;
    }
    else{
        node* new_node= new node();
        new_node->data= data;
        new_node->next=NULL;
        tail->next= new_node;
        tail=tail->next;
    }
}
void deletion() {
    node *current = root;
    node *pre = NULL;

    if (current == NULL) {
        cout << "Stack underflow\n";
        return;
    }
    
    while (current->next != NULL) {
        pre = current;
        current = current->next;
    }

    if (root==pre) {
        delete root;
        root = tail = NULL;
    } else {
        delete pre->next;
        pre->next = NULL;
        tail = pre;
    }
}

void print(){
    node* temp= root;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp= temp->next;
    }
    delete(temp);
}

int main(){
    cout<<"Enqueue:\n";
    insert(25);
    insert(26);
    insert(27);
    insert(28);
    insert(29);
    insert(30);
    print();
    cout<<"After deleting:\n";
    deletion();
    print();

}