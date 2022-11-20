#include<stdio.h>
#include<conio.h>
// for printing n number of fibonacci series using recursion
        int fib(int n)
        {
            if(n==1||n==2)
            {
                return 1;
            }
            else{
            return (fib(n-1) + fib(n-2));
            }
        }

int main()
{
    int x,y;
    printf("enter number ");
    scanf("%d",&x);
    printf(" fibonacci series is ");
    for (int i = 1; i < x; i++)
    {
         y=fib(i);
    printf(" %d  ",y); 
    }
    
  
    return 0;
}