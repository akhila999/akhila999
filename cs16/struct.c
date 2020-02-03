#include<stdio.h>
#include<stdlib.h>
struct demo
{
    char name[100];
	int id;
	float marks;
};
int main()
{
	struct demo obj[100];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	
	printf("enter the name:");
	scanf("%s",&obj[i].name);
	fflush(stdin);
	printf("enter the id:");
	scanf("%d",&obj[i].id);
	printf("enter the marks:");
	scanf("%f",&obj[i].marks);
}

	printf("\n------------------------\n");
	for(i=0;i<n;i++)
	{
	
	printf("id=%d name=%s marks=%f",obj[i].id,obj[i].name,obj[i].marks);
}
	
	return 0;
}

