#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//binary tree traversal using recursive method

     int s[10];
     int top=-1;
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
   
    struct node *t=root;
    while (t!=NULL)
    {
       // s.push(t);
        top++;
        s[top]=t->data;
        t=t->left;
    }
    while (top!=-1)
    {
        //t=s.pop();
        printf("%d",t->data);
        t=t->right;
        top--;
        while (t!=NILL)
        {
            s.push(t);
            t=t->left;
        }
        
    }
    


}

        pop(int x)
        {
            top++;
            s[top]=x;
            
        }
        p

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