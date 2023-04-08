#include<stdio.h>

void swap(int *n1,int *n2)
{
	int *t;
	t=*n1;
	*n1=*n2;
	*n2=t;
	printf("A=%d and B=%d",*n1,*n2);
}
main()
{
	int a,b;
	a=3;
	b=5;
	swap(&a,&b);
}
