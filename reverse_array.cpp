//Write a C program to reverse an array using pointers.

#include<stdio.h>
int main()
{
	int size,i;
	printf("enter size of the array:");
	scanf("%d",&size);
	int array[size];
	int *ptr=array;
	printf("enter elements:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",ptr);
		ptr++;
	}
	printf("reverse of array:\n");
    ptr--;
	for(i=size-1;i>=0;i--)
	{
		printf("%d  ",*ptr);
		ptr--;
	}
}


/*  output

enter size of the array:4
enter elements:
10
20
30
40
reverse of array:
40  30  20  10

*/
