#include<stdio.h>
int fun(int x)
{
	int r=0;
	while(x!=0)
	{
	
	x=x%10;
	r=r+x;
	x=x/10;
}
		if(r<=9)
	{
	
	 return r;
	}
	else
	{
		fun(r);
	}
	
}

	

int main()
{
	int a;
	printf("enter a value:\n");
	scanf("%d",&a);
	printf("sum=%d",fun(a));
	return 0;
}


//actual parameters=a nd b;
//formal parameters=x and y;
//this is call by value formal are reflecting back to actual para;

