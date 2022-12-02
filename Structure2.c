#include<stdio.h>

#pragma pack(1)
struct Demo
{
   int i;
   float f;  
   char ch;
   char ch2; 
   float d;
};

int main()
{
   struct Demo dobj;

   printf("Size of the structure is : %d\n",sizeof(dobj)); 
    	

	return 0;
}