#include<stdio.h>
void main()
{
	int a[16]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16},i,s;
	printf("Enter a number that yiu want to search");
	scanf("%d",s);
	for(i=0;i<16;i++)
	{
		if (s==a[i])
		{
			printf("Found");
			break;
		}
	}
	if(i==16)
	{
		printf("Not found");
	}
	getch();
}
