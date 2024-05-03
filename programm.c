int g = 5;  //global variable 
void fun1 ()
{
	extern int g;
	static int x ;
	x++;
	printf("%d \n",x);
	g++;
	printf("%d\n",g);
}
void main()
{
	extern int g;
	fun1();
	printf("%d",g);
	
	//fun1();
	//fun1();
	
	getch();
}
