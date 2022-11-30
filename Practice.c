#include<stdio.h>

int A = 10;

void Fun()
{
	auto int B = 15;
	register int C = 20;
	static int D = 11;

	B++;
	C++;
	D++;

	printf("Value of auto variable is : %d\n",B);
	printf("Value of register variable is : %d\n",C);
	printf("Value of static variable is : %d\n",D);

}

int main()
{
    printf("First Function call\n");
	Fun();
	
    printf("Second Function call\n");
	Fun();
	
	printf("Third Function call\n");
	Fun();
	
	return 0;
	
}