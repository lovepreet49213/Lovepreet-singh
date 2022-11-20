#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
// stack operation using link list
 void main()
 {
 

         struct node
         {
            int data;
            struct node *next;
        };
             struct node  *top=NULL, *newnode=NULL, *head=NULL, *track=NULL,*ptrack=NULL;
                 int  select=0;
         do
         {
              printf("\n1.push a node \n2.pop a node \n3.peek node \n4.exit");
              scanf("%d",&select);
          switch(select)
          {
              case 1:
                      if(top==NULL)
                     {
                         newnode=(struct node*)malloc(sizeof(struct node));
                     printf("enter data for node");
                     scanf("%d",&newnode->data);
                     newnode->next=NULL;
                         head=top=newnode;
                         
                         printf("\n%d pushed",top->data);

                       }
                    else
                   {
                     
                    
                     newnode=(struct node*)malloc(sizeof(struct node));
                     printf("enter data for node");
                     scanf("%d",&newnode->data);
                     newnode->next=NULL;
                     top->next=newnode;
                     top=newnode;
                     printf("\n%d pushed",top->data);
                     
                 }
            break; 

             case 2:
                    if(head==NULL)
	               {
	                    printf("underflow");
	               }
	             
	             else
	             {
                    track=head;
                    while (track->next!=NULL)
                    {
                        ptrack=track;
                        track=track->next;
                    }
                    
                      printf("\n%d poped",track->data);
	                   ptrack->next=NULL;
                       top=ptrack;
                 
	              }
	        break;

    
            case 3:
                printf("\n peek is");
                
                      printf("%d", top->data);
                      
                      printf("\n");
                 
         break;

        case 4:
           
                 printf("\n");
             
          
      
         break;
         default:
          printf("return to main menu");
         break;
     }
   }while(select!=4);
 }