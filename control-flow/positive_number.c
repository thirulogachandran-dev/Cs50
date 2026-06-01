#include <stdio.h>

int main(void)
{
	int num;
	do
	{
		printf("enter a positive number \n");
		if (scanf("%d",&num) != 1)
		{
			printf("invalid input\n");
		 	while(getchar() != '\n' );
		 	num = -1;
		}
	}while(num <= 0);
	return 0;
}
