#include<stdio.h>
/*struct Demo
{
	int id;
	char *name;
	float marks;
};*/
int main()
{
	int x,*ptr;
	x=10;
	ptr=&x;
	x+=100;
/*	printf("\n value x=%d",x);
	printf("\n add of x=%u",&x);
	printf("\n add of ptr=%u",&ptr);
	printf("\n value of ptr=%d",*ptr);
	printf("\n internal storage=%u",ptr);*/
	printf("\n value of ptr=%d",*ptr);
}

