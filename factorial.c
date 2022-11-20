#include<stdio.h>
#include<conio.h>
// for printing factorial of number using recursion
        int fact(int n)
        {
            if(n==1)
            {
                return 1;
            }
            else{
            return (n*fact(n-1));
            }
        }

int main()
{
    int x,y;
    printf("enter number ");
    scanf("%d",&x);
    printf(" factorial is ");
    
         y=fact(x);
    printf(" %d  ",y); 
    
    
  
    return 0;
}