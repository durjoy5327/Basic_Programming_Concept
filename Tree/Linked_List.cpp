#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};
void printList(node *head){

    while(head!=NULL){
        cout<<head->data<<"  ";
        head =head->next;
    }

}
int main(){
    node *head = new node();
    node *second = new node();
    node *third = new node();
    head->data =5;
    head->next= second;
    second->data=10;
    second->next = third;
    third->data=14;
    third->next= NULL;
    printList(head);
    return 0;
}