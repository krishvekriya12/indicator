#include<stdio.h>
main()
{
	int a[100]={10,20,30,40,50,60,70,80,90,100};
	int *p1;
	p1=&a;
	
	int i;
	for(i=0;i<=5;i++)
	{
		printf("%u=>%d\n",p1+i,*(p1+i));
	}
}