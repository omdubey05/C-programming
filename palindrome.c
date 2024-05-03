#include<stdio.h>
#include<stdio.h>
void main()
{
    char a[15];
    int i , l;
    printf("enter a string \n");
    scanf("%s",a);
    l = strlen(a);

    for(i=0;i<l/2;i++)
    {
        if(a[i]!=a[l-1-i])
        {
            printf("not palindrome");
            break;
        }
    }    
        if(i==l/2){

          printf("palindrome");
        }
    
    getch();
}
