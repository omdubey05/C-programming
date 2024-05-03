void main(){
	register int x=2;
	register int y = 3;
	register int z =x+y;
	printf("%d",z);
	{
		int x =3;
		printf("%d",x);
	}
	printf("%d",x);
	
	getch();
}
