//Write a C program to swap two arrays using pointers

#include<stdio.h>
int main()
{
	int size,i;
	printf("enter size:");
	scanf("%d",&size);
	int array1[size],array2[size];
	int *ptr1=array1;
	int *ptr2=array2;
	printf("enter array1 elements:");
	for(i=0;i<size;i++)
	{
		scanf("%d",ptr1);
		ptr1++;
	}
	printf("\nenter array2 elements:");
	for(i=0;i<size;i++)
	{
		scanf("%d",ptr2);
		ptr2++;
	}
	ptr1=array1;
	ptr2=array2;
	int temp;
	for(i=0;i<size;i++)
	{
		temp=*ptr1;
		*ptr1=*ptr2;
		*ptr2=temp;
		ptr1++;
		ptr2++;
	}
	printf("array1:\n");
	ptr1=array1;
	for(i=0;i<size;i++)
	{
		printf("%d  ",*ptr1);
		ptr1++;
	}
	printf("\n");
	printf("array2:\n");
	ptr2=array2;
	for(i=0;i<size;i++)
	{
		printf("%d  ",*ptr2);
		ptr2++;
	}
}

/*  output
enter size:4
enter array1 elements:10
20
30
40

enter array2 elements:50
60
70
80
array1:
50  60  70  80
array2:
10  20  30  40

*/
