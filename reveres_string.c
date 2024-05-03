#include<stdio.h>
#include<string.h>
void main(){
    char a[40] , t;
    int i, l;
    puts("Enter a string");
    scanf("%s",a);// string me '&' not needed
    l=strlen(a);
    //printf("length of string is %d",l);
    for (i=0;i<l/2;i++){
        t = a[i];
        a[i] = a[l-1-i];
        a[l-1-i] = t;
    }
    printf("reverse string is %s",a);
    //getch();
}
