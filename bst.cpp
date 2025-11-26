#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
int data;
node*left,*right;
return newnode;
}
node* bst(node*root,int value){
    if(root==NULL)
    return crtnd(value);
};
node*crtnd(int value){
node*newnode=(node*)malloc(sizeof(node));
newnode->data=value;
newnode->left=NULL;
newnode->right=NULL;

    if(root->data>value)
        root->left=bst(root->left,value);
    else if(root->data<value)
    root->right=bst(root->right,value);
    return root;
    }
void inorder(node*root){
if(root==NULL)
    return;
inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);

}
int main (){
    node*root=NULL;
int n,value;
cout<<"how many nodes do you want to create in your tree";
cin>>n;
cout<<"enter the values";
for(int i=0;i<n;i++){
    cin>>value;
    root=bst(root,value);

}
cout<<"inorder traversal";
inorder(root);
cout<<endl;
return 0;}
