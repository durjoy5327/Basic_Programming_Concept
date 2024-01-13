#include <iostream>
using namespace std;
struct node{
  int roll;
  node* next;
};
node* root= NULL;
void append(int roll){
    if(root==NULL){
        root= new node();
        root->roll=roll;
        root->next=NULL;
    }
    else{
        node* current_node= root;
        while(current_node->next!=NULL){
            current_node= current_node->next;
        }
        node* new_node= new node();
        new_node->roll= roll;
        new_node->next= NULL;
        current_node->next = new_node;
    }
}
void deleted(int roll){
    node* current_node= root;
    node* previous_node=NULL;
     while(current_node->roll!=roll){
        previous_node= current_node;
        current_node=current_node->next;
    }
    if(current_node==root){
        node* temp= root;
        root=root->next;
        delete(temp);
    }
   else{
      previous_node->next=current_node->next;
      delete(current_node);
   }
}
void add(int roll1, int roll2){
    node* current_node=root;
    while(current_node->roll!=roll1){
        current_node= current_node->next;
    }
    node* newnode= new node;
    newnode->roll=roll2;
    newnode->next= current_node->next;
   current_node->next= newnode;
}
void print(){
    node* new_node = root;
    while(new_node!=NULL){
        cout<<new_node->roll<<endl;
        new_node= new_node->next;
    }
}
int main() {
    cout<<"After pushing all elements:\n";
    append(45);
    append(56);
    append(66);
    append(466);
    print();
    deleted(66);
     cout<<"After deleting one element:\n";
    print();
    add(45,25);
    cout<<"After adding one element in the middle or after another element\n";
    print();
    return 0;
    
}