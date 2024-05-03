#include<stdio.h>
void main()
{
	FILE *x;
	char a[20];
	x = fopen("abhi.txt","r");
	fsancf(x,"%d",a);
	printf("%s",a);
	
	
	fclose(x);
//	getch();
}
