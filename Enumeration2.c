#include<stdio.h>

enum days{ Monday = 123, Tuesday, Wednesday, Thursday};

int main()
{
	enum days obj;

    printf("Size of enum is : %d\n",sizeof(obj));
	printf("Monday : %d\n",Monday);
	printf("Tuesday : %d\n",Tuesday);
	printf("Wednesday : %d\n",Wednesday);
	printf("Thursday : %d\n",Thursday);
	
	return 0;
}