#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
// circular queue operation using  link list
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
              printf("\n1.enqueue a node \n2.dequeue a node \n3.display queue \n4.search element \n5.exit\n");
              scanf("%d",&select);
          switch(select)
          {
              case 1:
                      if(front==NULL)
                     {
                      newnode=(struct node*)malloc(sizeof(struct node));
                     printf("enter data for node ");
                     scanf("%d",&newnode->data);
                     newnode->next=NULL;
                         rear=front=newnode;
                         rear->next=front;
                         printf("\n%d enqueqed",rear->data);

                       }
                    else
                   {
                        track=front;
                          while(track->next!=front)
                    {
                     track=track->next;
                    }
                     newnode=(struct node*)malloc(sizeof(struct node));
                     printf("enter data for node ");
                     scanf("%d",&newnode->data);
                     newnode->next=NULL;
                     track->next=newnode;
                     rear=newnode;
                      rear->next=front;
                     printf("\n%d enqueqed",rear->data);
                 }
            break; 

             case 2:
                    if(front==NULL||front==rear)
	               {
	                    printf("\nunderflow\n");
	               }
	             else if(front->next==rear)
	                {
                      printf("\n%d dequeqed\n",front->data);
	                  front=NULL;

                       rear=NULL;
	                  printf("\nqueue is empty now\n");
	                 }
	             else
	             {
                      printf("\n%d dequeqed",front->data);
	                   
                       rear->next=front->next;
                       front=front->next;
                 
	              }
	        break;

    
            case 3:
                printf("\n Queue is\n");
                  temp=front;
                  while(temp->next!=front)
                 { 
                      printf("%d", temp->data);
                      temp=temp->next;
                      printf("\n");
                 }
                 printf("%d", temp->data);
         break;

        case 4:
           printf("enter data to search");
            scanf("%d",&no);
            temp=front;
            while(temp->next!=front)
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