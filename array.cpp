//Write a C program to input and print array elements using pointer

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
	ptr=array;
	printf("array:\n");
	for(i=0;i<size;i++)
	{
		printf("%d ",*ptr);
		ptr++;
	}
}

/*   output
enter size of the array:4
enter elements:
10
20
30
40
array:
10 20 30 40

*/
