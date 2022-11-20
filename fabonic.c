#include<stdio.h>
int main()
{

    int n,f=0,s=1,sum=0,next=0;
    printf("enter number ");
    scanf("%d",&n);
     printf("series is ");
     while (f<=n)
     {
        printf(" %d  ",f);
        sum=sum+f;
        next=f+s;
        f=s;
        s=next;
     }
     printf("\nsum is %d",sum);
    return 0;

}