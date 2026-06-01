// asking inputs and printing it
#include <stdio.h>

int main(void)
{
	char name[25];
	int age;
	printf("Your name : ");
	scanf("%s",name);
	printf("Your age : ");
	scanf("%d",&age);
	printf("Hello %s ,you are %d years old.\n",name ,age);
	return 0;
}
