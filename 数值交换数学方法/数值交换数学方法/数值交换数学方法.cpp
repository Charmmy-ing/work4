#include<stdio.h>
int main()
{

	int integer1, integer2;
	printf("please enter the first integer:");
	scanf_s("%d", &integer1);//3
	printf("please enter the second integer:");
	scanf_s("%d", &integer2);//6
	integer1 = integer1 + integer2;
	integer2 = integer1 - integer2;
	integer1 = integer1 - integer2;
	printf("integer1=%d\n", integer1);
	printf("integer2=%d\n", integer2);
	return 0;

}

