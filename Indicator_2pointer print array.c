#include<stdio.h>

main()
{
	int a[] = {2,4,6};
	int i;
	int *p[3];
	
	for(i=0;i<=2;i++)
	{   
	    p[i]=&a[i];
		printf("%u=> %d\n",p[i],*p[i]);
	} 
     
}
