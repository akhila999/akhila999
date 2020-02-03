#include<stdio.h>
struct Demo
{
	int id;
	char *name;
	float marks;
};
int main()
{
	struct Demo p;
	p.id=100;
	p.name="akhila";
	p.marks=89;
	printf("id=%d",p.id);
	printf("\nname=%s",p.name);
	printf("\nmarks=%f",p.marks);
}

