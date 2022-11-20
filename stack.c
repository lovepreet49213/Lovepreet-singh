#include<stdio.h>
#include<conio.h>
// stack operation using array
 void main()
{
  int stack[20]={0};
  int  top=-1, n=20, select;
 
  do
   {
    printf("\n1.push \n2.pop \n3.peek \n4.exit\n");
    scanf("%d", &select);
   switch(select)
    {
     case 1:
        if(top==n-1)
        {
         printf("overflow");
        }
        
      else
       {
         top++;
         printf("\nenter data for push in stack\n");
         scanf("%d", &stack[top]);
         printf("\nitem pushed\n");
       }
       break;
      case 2:
         if(top==-1)
         {
          printf("\nunderflow\n");
         }
          
       
       else{

            printf("\n%d poped\n",stack[top]);
            top--;
            
       }
        break;
      case 3:
        
          printf("\npeek is   %d", stack[top]);
         
        
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