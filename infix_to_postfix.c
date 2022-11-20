 #include<stdio.h>
  #include<conio.h>
 void main()
 {
    char s[10],stack[10],postfix[10];
    int j=0,k=0;
    printf("enter name\n");
    fgets(s,10,stdin);
    printf("\n%s",s);
    for (int i = 0; i < 10; i++)
    {
        
        if(s[i]=='+'||s[i]=='/'||s[i]=='-'||s[i]=='*')
        {
        stack[j]=s[i];
        j++;
        }
        else
        {
                postfix[k]=s[i];
                k++;

        }
    }
     printf("\n");
     for (int i = 0; i < j; i++)
    {
        printf("%c",stack[i]);
    }
    printf("\n");
    for (int i = 0; i< k;i++)
    {
        printf("%c",postfix[i]);
    }
 }