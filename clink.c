
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
// operations on circular link list
 void main()
 {
 

  struct node
  {
   int data;
   struct node *next;
  };
       struct node *head=NULL, *newnode=NULL, *temp=NULL, *track=NULL, *pptr=NULL, *ptr=NULL,*dlt=NULL,*tail=NULL,*vir;
      int count=1, select=0, sselect=0, deselect=0, l=0, x=0, i=0, no;
        do
      {
       printf("\n1.insert a node \n2.delete a node \n3.display linklist \n4.search element \n5.exit\n");
      scanf("%d",&select);
      switch(select)
    {
     case 1:
       do
	    {
	     printf("\n1.insert at begining \n2.insert at given loction \n3. insert at end \n4.back\n");
	     scanf("%d",&sselect);
       switch(sselect)
       {
      case 1:
       newnode=(struct node*)malloc(sizeof(struct node));
       printf("\nenter data for node to insert at beginning\n");
       scanf("%d",&newnode->data);
       newnode->next=NULL;
        
      if(tail==NULL)
      {
        
       tail=head=newnode;
       tail->next=newnode;
       
      }
      else
      {
       
    newnode->next=tail->next;
    
    tail->next=newnode;
    head=newnode;
    

      }
      
       break;

     case 2:
       printf("\nenter loction to insert node after it\n");
       scanf("%d",&l);
      track=head;
       while(count<l)
       {
	    count++;
	      track=track->next;
       }
	    
    	newnode=(struct node*)malloc(sizeof(struct node));
    	printf("\nenter data for node\n");
	    scanf("%d",& newnode->data);

	    newnode->next=track->next;
	    track->next=newnode;
       break;

     case 3:

        newnode=(struct node*)malloc(sizeof(struct node));
       printf("\nenter data for node\n");
       scanf("%d",&newnode->data);
        newnode->next=tail->next;
       tail->next=newnode;
       tail=newnode;



       
      
      
      break;

     case 4:
      printf("\nexit\n");
     break;
     default:
      printf("\nreturn to main menu\n");
     break;
   }
  }
    while(sselect!=4);
     break;
     case 2:
      do
       {
	printf("\n1.delete from beginning \n2.delete from end \n3.delete from given location \n4.exit\n");
	scanf("%d", & deselect);
     switch(deselect)
     {
      case 1:
	 if(head==NULL)
	{
	 printf("\nunderflow\n");
	}
	else if(head->next==head)
	{
	 head=NULL;
	 printf("\nlist is empty now\n");
	}
	else
	{
        

        tail->next=head->next;
        head=head->next;

	 
	}
	break;

      case 2:
	 if(head->next==head)
	 {
	  head=NULL;
	  printf("\nlist is empty now\n");
	 }
	else if(head==NULL)
	 {
	  printf("\nunderflow\n");
	 }
	else
	 {
	  temp=head;
	  while(temp!=tail)
	  {
	   pptr=temp;
	   temp=temp->next;
	  }
	  pptr->next=head;
    tail=pptr;
	  printf("\nnode deleted form end\n");
	 }
	 break;

	 case 3:
	 printf("\nenter location after which you want to delete a node\n");
	 scanf("%d", & x);
	 temp=head;
	 while (i<x)
	{
	 temp= temp->next;
	 i++;
	}
	dlt=temp->next;
	temp->next=dlt->next;
        printf("\nnode is deleted from location\n");
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
        printf("\n list is\n");
          temp=head;
    {
          while(temp->next!=head)
        { 
          printf("%d", temp->data);
          temp=temp->next;
          
          printf("\n");
        }
        printf("%d",temp->data);
    }
         break;
   
      case 4:
        printf("\nenter element to search\n");
        scanf("%d",&no);
track=head;
while(track->next!=head)
{
if(track->data==no)
{
//printf("\nElement found\n");
break;
}


else
{ 
track=track->next;
}

}
 if(track->data==no)
{
  printf("\nelement found\n");
}
else{

  printf("\nelement not found\n");
}


        break;
      case 5:
      printf("\nexit\n");
      break;
	default:
        break;
       }
      }
       while(select!=5);
       getch();
} 
