
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//doubly link list opertaions
 void main()
 {
 

  struct node
  {
   int data;
   struct node *next,*prev;
  };
  struct node *head=NULL, *newnode=NULL,*tail=NULL, *temp=NULL, *track=NULL, *pptr=NULL, *ptr=NULL,*dlt=NULL;
  int count=1, select=0, sselect=0, deselect=0, l=0, x=0, i=1, no;
  do
   {
    printf("\n1.insert a node \n2.delete a node \n3.display linklist \n4.search element \n5.exit");
    scanf("%d",&select);
    switch(select)
    {
     case 1:
       do
	{
	 printf("\n1.insert at begining \n2.insert at given loction \n3. insert at end \n4.back");
	 scanf("%d",&sselect);
     switch(sselect)
     {
      case 1:
       newnode=(struct node*)malloc(sizeof(struct node));
       printf("enter data for node to insert at beginning");
       scanf("%d",&newnode->data);
       newnode->next=NULL;
         newnode->prev=NULL;

      if(head==NULL)
      {
       tail=head=newnode;
        printf("%d inserted",newnode->data);
      }
      else
      {
       
       head->prev=newnode;
       newnode->next=head;
       head=newnode;
        printf("%d inserted",newnode->data);
      }
       break;

     case 2:

        
       printf("enter loction to insert node after it");
       scanf("%d",&l);
         newnode=(struct node*)malloc(sizeof(struct node));
      printf("enter data for node");
      scanf("%d",&newnode->data);
      newnode->next=NULL;
      newnode->prev=NULL;

       track=head;
       while(count<l)
       {
	count++;
	track=track->next;
       }
	
	
    newnode->prev=track;
	newnode->next=track->next;
	track->next=newnode;
    (newnode->next)->prev=newnode;
     printf("%d inserted",newnode->data);
       break;

     case 3:
    
        newnode=(struct node*)malloc(sizeof(struct node));
      printf("enter data for node");
      scanf("%d",&newnode->data);
      newnode->next=NULL;
      newnode->prev=NULL;

        if(head==NULL)
      {
       tail=head=newnode;
        printf("%d inserted",newnode->data);
      }
      else
      {

      tail->next=newnode;
      newnode->prev=tail;
      tail=newnode;
       printf("%d inserted",newnode->data);
     }
      break;

     case 4:
      printf("exit");
     break;
     default:
      printf("return to main menu");
     break;
   }
  }
    while(sselect!=4);
     break;
     case 2:
      do
       {
	printf("\n1.delete from beginning \n2.delete from end \n3.delete from given location \n4.exit");
	scanf("%d", & deselect);
     switch(deselect)
     {
      case 1:
	 if(head==NULL)
	{
	 printf("underflow");
	}
	else if(head->next==NULL)
	{
         printf("%d deleted from begining",head->data);
	 head=NULL;
     tail=head;
	 printf("list is empty now");
	}
	else
	{
        printf("%d deleted from begining",head->data);
	 head=head->next;
     head->prev=NULL;
	}
	break;

      case 2:
	 
	 if(head==NULL)
	 {
	  printf("underflow");
	 }
	else
	 {
         printf("%d ", tail->data);
        tail=tail->prev;
	  tail->next=NULL;
	  printf(" deleted form end");
	 }
	 break;

	 case 3:
	 printf("enter location after which you want to delete a node");
	 scanf("%d",&x);
	 temp=head;
	 while(i<x)
	{
	 temp=temp->next;
	 i++;
	} 
     printf("%d ",(temp->next)->data);
   pptr=temp;
    
  
    temp->next=(temp->next)->next;
    (temp->next)->prev=temp;
            printf(" is deleted from %dlocation",x);
        break;
        
       case 4:
        printf("\n");
        break;
        default:
        break;
       }
      }
       while(deselect!=4);
        break;
       
        case 3:
        printf("\nforward list is\n");
          temp=head;
          while(temp!=NULL)
        { 
          printf("%d", temp->data);
          temp=temp->next;
          printf("\n");
        }

        printf("\nbackward list is\n");
          temp=tail;
          while(temp!=NULL)
        { 
          printf("%d", temp->data);
          temp=temp->prev;
          printf("\n");
        }
         break;
   
      case 4:
        printf("enter element to search ");
        scanf("%d",&no);
track=head;
while(track!=NULL)
{
if(track->data==no)
{
printf("Element found");
break;
}
else
{ 
track=track->next;
}
}
if( track==NULL)
{
printf("element not found");
}
        break;
      case 5:
      printf("exit");
      break;
	default:
        break;
       }
      }
       while(select!=5);
       getch();
} 
