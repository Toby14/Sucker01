#include <stdio.h>
//Use pointers to write a swap() function that takes the addresses of two variables 
//and then swaps their values.

void swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}


int main(void)
{
	int i = 78, j = 106;
	
	printf("Before swapping...\n");
	printf("i = %d and j = %d\n", i, j);
	swap(&i, &j);
	
	printf("After swapping..\n");
	printf("i = %d and j = %d\n", i, j);
	
	return 0;
}
