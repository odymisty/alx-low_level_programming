#include <stdio.h>

int main()
{
	/*Local Variable definition */
	int age;
	printf("Please enter your age:");
	scanf("%d", &age);

	/* Check the boolean condition*/
	if (age < 100)
	{
		printf("You are pretty young!\n");
	}
	else if (age==100)
	{
		printf("You are old.\n");
	}
	else
       	{
		printf("You are really old.\n");
	}
	return 0;
}

