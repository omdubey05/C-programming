#include<stdio.h>
void main(){
	int i, j, p;
	for (i=1;i<=5;i++)
	{
		p=1;
		for (j=1;j<=9;j++)
		    {
			if(j>=6-i&&j<=4+i&&p==1)
			{
				printf("*");
				p=0;
			}
			else
			{
				printf(" ");
				p=1;
			}
		}
		printf("\n");
	}
	
}
