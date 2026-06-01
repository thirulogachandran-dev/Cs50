#include <stdio.h>

int main(void)
{
	int age;
	printf("Enter your age : ");
	scanf("%d",&age);
	if (scanf("%d",&age) == 0)
	{
		printf("Invalid : enter numbers\n");
		return 1;
	}
	else if (age < 0 || age > 100)
	{
		printf("Invalid age.\n");
	}
	else if (age >= 18 )
	{
		printf("you're an adult.\n");
	}
	else 
	{
		printf("you're a child.\n");
	}
	
	return 0;
}
