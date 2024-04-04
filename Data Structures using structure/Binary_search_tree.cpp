#include <iostream>
using namespace std;
struct node{
    int data;
    node *left,*right;
};
node *root=NULL;
void insert(int data){
    
    if(root==NULL){
        root= new node();
        root->data = data;
    }
    else{
        node *parent , *current=root;
       
        while(current!=NULL){
            if(current->data>data){
                parent= current;
                current = current->left;
            }
            else{
                parent= current;
                current= current->right;
            }
        }
        node* newnode= new node();
        newnode->data=data;
        if(data >parent->data){
            parent->right= newnode;
        }
        else parent->left=newnode;
    }
}
void print(node *current)
{
	if(current!=NULL){
	
	cout<<current->data<<endl;
	print(current->left);
	print(current->right);
	}
}
int main() {
    insert(56);
    insert(25);
    insert(86);
    node* newnode= root;
    cout<<"preorder output:\n";
    print(newnode);
    
    
    return 0;
}