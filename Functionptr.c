#include<stdio.h>

void Fun()
{
	
	printf("Inside Fun\n");
}

int main()
{
	
	Fun();

	void (*fptr)();

	fptr = Fun;

	fptr();

	return 0;
}