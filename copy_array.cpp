//Write a C program to copy one array to another using pointers

#include<stdio.h>
int main()
{
	int size,i;
	printf("enter size:");
	scanf("%d",&size);
	int array[size];
	int copy[size];
	int *ptr1=array;
	int *ptr2=copy;
	for(i=0;i<size;i++)
	{
		scanf("%d",ptr1);
		ptr1++;
	}
	ptr1=array;
	for(i=0;i<size;i++)
	{
		*ptr2=*ptr1;
		ptr1++;
		ptr2++;
	}
	ptr2=copy;
	printf("copied array is\n");
	for(i=0;i<size;i++)
	{
		printf("%d\n",*ptr2);
		ptr2++;
	}
}

/*   output
enter size:4
10
20
30
40
copied array is
10
20
30
40

*/
