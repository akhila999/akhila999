#include<stdio.h>
void fun(int x,int y)
{
	printf("x and y values before modification:\n");
	printf("x=%d\ty=%d\n",x,y);
	x+=10;
	y+=10;
	printf("after modification=\n");
	printf("x=%d\t y=%d\n",x,y);
	
}
int main()
{
	int a,b;
	printf("enter 2 values of and b:\n");
	scanf("%d%d",&a,&b);
	printf(" values of and b are:\n");
	printf("a=%d\tb=%d\n",a,b);
	fun(a,b);
	printf("after fun call=\n");
	printf("a=%d\tb=%d\n",a,b);
	return 0;
}


//actual parameters=a nd b;
//formal parameters=x and y;
//this is call by value not reflecting back;

