#include<stdio.h>
swap(int *n1,int *n2)
{
	int *t;
	t=*n1;
	*n1=*n2;
	*n2=t;
	
	printf("a=>%d\nb=>%d",*n1,*n2);
	
}
main()
{
	int a=100;
	int b=200;
	swap(&a,&b);
}