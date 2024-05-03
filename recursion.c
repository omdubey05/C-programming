// sum of n natural no. using recursion
int sum(int n){
	if (n==1)
	return 1;
	
	else 
	return n+sum(n-1);
}
void main(){
	int n;
	printf("Enter a number");
	scanf("%d",&n);
	int a;
	a= sum(n);
	printf("sum of natural no. is %d",a);
	getch();
}
