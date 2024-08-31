// C program to add two number using pointers

#include<stdio.h>
int main()
{
	int n1,n2,sum;
	printf("enter number 1 :");
	scanf("%d",&n1);
	printf("enter number 2 :");
	scanf("%d",&n2);
	int *ptr1,*ptr2;
	ptr1=&n1;
	ptr2=&n2;
	sum=*ptr1+*ptr2;
	printf("sum=%d",sum);
}

/*   output

enter number 1 :25
enter number 2 :30
sum=55

*/
