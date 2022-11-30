#include<stdio.h>

int A = 10;

extern int B;

int main()     
{
     
   printf("Value of A is : %d\n",A);   
   printf("Value of B from other file is : %d\n",B);
  
   return 0;

}