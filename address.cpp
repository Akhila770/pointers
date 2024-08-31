//C program to get memory address using address of operator

#include<stdio.h>
int main()
{
	char c='T';
	int i=345;
	float f=456.345;
	long int l=12344555234;
	printf("address of the charecter %c :%u\n",c,&c);
	printf("address of the integer  %d :%u\n",i,&i);
	printf("address of the float %f :%u\n",f,&f);
	printf("address of the lond int  %l :%u\n",l,&l);
}
/*  output

address of the charecter T :6487583
address of the integer  345 :6487576
address of the float 456.345001 :6487572
address of the lond int   :3754620642


*/
