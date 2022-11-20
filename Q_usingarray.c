#include<stdio.h>
#include<conio.h>
//simple queue operation using array
 void main()
{
  int array[20]={0};
  int front=-1, rear=-1, n=20, select;
 
  do
   {
    printf("\n1.enqueue \n2.dequeue \n3.display \n4.exit\n");
    scanf("%d", &select);
   switch(select)
    {
     case 1:
        if(rear==n-1)
        {
         printf("overflow");
        }
        else if (front==-1&&rear==-1)
       {
        front=0;
        rear=0;
      printf("\nenter data for insert in queue\n");
      scanf("%d",&array[rear]);
      printf("\nitem inserted\n");
        }
      else
       {
         rear++;
         printf("\nenter data for insert in queue\n");
         scanf("%d", &array[rear]);
         printf("\nitem inserted\n");
       }
       break;
      case 2:
         if(front==-1&&rear==-1)
         {
          printf("\nunderflow\n");
         }
          
       else if (front==rear)
       {
         printf("\n%d deleted\n",array[front]);
        front=-1;
        rear=-1;
        
        
       }
       else{
            printf("\n%d deleted\n",array[front]);
            front++;
            
       }
        break;
      case 3:
        if(front==-1&&rear==-1)
        {
         printf("\nqueue is empty\n");
        }
        else
        {
            printf("\nQueue is :\n");
         for(int i=front; i<rear+1; i++)
         {
          printf("\n%d", array[i]);
         }
        }
          break;
        case 4:
          printf("\n");
          break;
          default:
          break;
         }
        }
        while(select!=4);
        getch();
 }