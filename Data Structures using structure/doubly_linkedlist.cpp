#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node* prev;
};
node *root=NULL,*tail;
void append(int data){
    if(root==NULL){
        root = new node();
        root->data= data;
        root->next= NULL;
        tail= root;
    }
    else{
        node* newnode = new node();
        newnode->data= data;
        newnode->next= NULL;
        tail->next= newnode;
        tail= tail->next;
    }
}
void print(){
    node* currentnode = root;
    while(currentnode!=NULL){
        cout<<currentnode->data<<endl;
        currentnode= currentnode->next;
    }
}
int main(){
    append(45);
    append(55);
    append(65);
    append(75);
    print();

}