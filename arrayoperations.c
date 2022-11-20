#include<stdio.h>
#include<conio.h>

//array operations
int main()
{
int a[5]={0};

int select,sselect,dselect,no,e=0,pos,loc,i,s;
do
   {
    printf("\n1.insertion  \n2.deletion  \n3.display array \n4.search element \n5.exit\n");
    scanf("%d",&select);
    switch(select)
    {
     case 1:
       do
        {
         printf("\n1.insert at begining \n2.insert at end\n3. insert at given loction \n4.back\n");
         scanf("%d",&sselect);
     switch(sselect)
     {
      case 1:
        
        if(a[0]==0)
        {
            printf("\nenter number");
             scanf("%d",&no);
            
            a[0]=no;
           e++;
        }
        else
         {
            if(e<5)
            {
                printf("\nenter number");
             scanf("%d",&no);
             for(i=e-1;i>=0;i--)
                {
                    a[i+1]=a[i];
                }
                    a[0]=no;
                    e++;
            }
            else
            {
                printf("\nOverflow");
            }
         }
    break;
    case 2:
            if(e<5)
            {
                printf("\nenter number");
             scanf("%d",&no);
                a[e]=no;
                e++;
            }
            else 
            {
            printf("\nOverflow");
            }
    break;
    case 3:
            printf("\nenter number");
             scanf("%d",&no);
            printf("\nenter position");
             scanf("%d",&pos);


            for(i=e-1;i>=pos-1;i--)
            {
                a[i+1]=a[i];
            }
                a[i+1]=no;
                e++;
    break;
    case 4:
                printf("\n");
    break;
    default :
    
         printf("\n");
    
    break;
         }
     }while(sselect!=4);
break;
case 2:
    
    do
    {
        
        printf("\n1.deletion from begining \n2. deletion from end\n3.deletion from given loction  \n4.back\n");
         scanf("%d",&dselect);
    
        switch(dselect)
        {
            case 1:
            
                if(e==0)
                {
                printf("\nUnderflow");
                }
                else
                {
                    printf("\n%d deleted from first",a[0]);
                    for(int i=0;i<e-1;i++)
                    {
                        a[i]=a[i+1];
                    }
                    
                    e--;
                    a[e]=0;
                }
            break;
            
            case 2:
                if(e==0)
                {
                printf("\nUnderflow");
                }
                else
                {
                    e--;
                    printf("\n%d deleted",a[e]);
                    a[e]=0;
                    e--;
                }
            break;
            case 3:
                
                    printf("\nEnter location");
                    scanf("%d",&loc);
                    printf("\n%d Deleted ",a[loc-1]);
                    for(int i=loc-1;i<5-1;i++)
                    {
                        a[i]=a[i+1];
                    }
                    a[e]=0;    
                    
                    e--;
              
            break;
            
            case 4:
                printf("\n");
            break;
            default :
            printf("\n");
            break;
        }
}while(dselect!=4);

break;
 case 3:
            for (int i = 0; i < 5; i++)
            {
                    printf("\n%d element is %d ",i+1,a[i]);
                    printf("\n");
            }
            
    printf("\n");
break;

 case 4:
                printf("\nenter element for search\n");
                scanf("%d",&s);
                 for (int i = 0; i < 5; i++)
            {
                if(a[i]==s)
                {
                    printf("\n%d element found at %d location ",a[i],i+1);
                    printf("\n");
                    break;
                }
                else
                {
                    printf("\nelement not present");
                    break;
                }
            }
break;

default:
    printf("\n");
 break;
    
    }
   }while(select!=5);

return 0;

}

