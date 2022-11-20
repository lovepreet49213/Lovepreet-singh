#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
// simple queue operation using link list
 void main()
 {
 

         struct node
         {
            int data;
            struct node *next;
        };
             struct node *front=NULL, *rear=NULL, *newnode=NULL, *temp=NULL, *track=NULL;
                 int  select=0, no;
         do
         {
              printf("\n1.enqueue a node \n2.dequeue a node \n3.display queue \n4.search element \n5.exit");
              scanf("%d",&select);
          switch(select)
          {
              case 1:
                      if(front==NULL)
                     {
                      newnode=(struct node*)malloc(sizeof(struct node));
                     printf("enter data for node");
                     scanf("%d",&newnode->data);
                     newnode->next=NULL;
                         front=newnode;
                         rear=newnode;
                         printf("\n%d enqueqed",rear->data);

                       }
                    else
                   {
                        track=front;
                          while(track->next!=NULL)
                    {
                     track=track->next;
                    }
                     newnode=(struct node*)malloc(sizeof(struct node));
                     printf("enter data for node");
                     scanf("%d",&newnode->data);
                     newnode->next=NULL;
                     track->next=newnode;
                     rear=newnode;
                     printf("\n%d enqueqed",rear->data);
                 }
            break; 

             case 2:
                    if(front==NULL||front==rear)
	               {
	                    printf("underflow");
	               }
	             else if(front->next==NULL)
	                {
                      printf("\n%d dequeqed",front->data);
	                  front=NULL;
	                  printf("queue is empty now");
	                 }
	             else
	             {
                      printf("\n%d dequeqed",front->data);
	                   front=front->next;
                 
	              }
	        break;

    
            case 3:
                printf("\n Queue is");
                  temp=front;
                  while(temp!=NULL)
                 { 
                      printf("%d", temp->data);
                      temp=temp->next;
                      printf("\n");
                 }
         break;

        case 4:
           printf("enter data to search");
            scanf("%d",&no);
            temp=front;
            while(temp!=NULL)
          { 
           
                  if(temp->data==no)
                  {

                      break;
                  }
                 else
                {
                    temp=temp->next;
                }
             }
        
             if(temp->data==no)
            {
              printf("\n%d found\n", temp->data);
            }
             else
             {
                 printf("data not found");
             }  
          
      
         break;
         default:
          printf("return to main menu");
         break;
     }
   }while(select!=5);
 }