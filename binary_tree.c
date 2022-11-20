#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//binary tree traversal using recursive method
struct node
{
    int data;
    struct node *left,*right;
};
struct node *create()
{
    int x;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n enter data for node or enter -1 for no node");
    scanf("%d",&x);
    if(x==-1)
    {
        return NULL;
    }
    newnode->data=x;
    printf("\n enter data for left child of %d",x);
    newnode->left=create();
    printf("\n enter data for left child of %d",x);
    newnode->right=create();
    return newnode;


}
void preorder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    printf("\t%d",root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct node *root)
{
     if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("\t%d",root->data);
}
void inorder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    printf("\t%d",root->data);
    inorder(root->right);


}

    


void main()
{
    struct node *root;

    root=NULL;
    root=create();
         printf("\n preorder traversal is\n");
         preorder(root);
       
        printf("\n postorder traversal is\n");
        postorder(root);
       
        printf("\n inorder traversal is\n");
         inorder(root);
    return ;
}