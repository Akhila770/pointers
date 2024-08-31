//Write a C program to swap two numbers using pointers

#include<stdio.h>
int main()
{
	int n1,n2;
	printf("enter n1:");
	scanf("%d",&n1);
	printf("enter n2:");
	scanf("%d",&n2);
	int *ptr1,*ptr2;
	ptr1=&n1;
	ptr2=&n2;
	int temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
	printf("n1=%d\nn2=%d",*ptr1,*ptr2);
}
/*  output

enter n1:5
enter n2:8
n1=8
n2=5

*/
