#include<stdio.h>
void main(){
	int i, j;
	char p = 65;
	for (i=1;i<=4;i++)
	{
		//p=1;
		for (j=1;j<=7;j++)
		    {
			if(j>=5-i&&j<=3+i)
			{
				printf("%c",p);
				p = 65;
			}
			else
			{
				printf(" ");
				//p=1;
			}
		}
		printf("\n");
		p++;
	}
	
}
