#include<stdio.h>
int main() 
{

	int integer1, integer2,A;
	printf("please enter the first integer:");
	scanf_s("%d", &integer1);
	printf("please enter the second integer:");
	scanf_s("%d", &integer2);
	A = integer1;//交换两杯水要用到3个杯子
	integer1 = integer2;
	integer2 = A;
	printf("integer1=%d\n",integer1);
	printf("integer2=%d\n", integer2);
	return 0;

}