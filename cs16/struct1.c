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
	struct demo obj;
    printf("name:%d",sizeof(obj.name));  
	printf("\nid:%d",sizeof(obj.id));
	printf("\nmarks:%d",sizeof(obj.marks));
	printf("\nsize of structure:%d",sizeof(obj));
	return 0;
}

