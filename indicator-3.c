#include<stdio.h>
main()
{
	int n,a[100],i;
	int *ptr;
	printf("enter your sweet name=>");
	scanf("%d",&n);
	ptr=&a[0];
	printf("enter elemnts=>\n");
	 	for(i=0;i<n;i++)
	 	{
	 		scanf("%d",ptr);
	 		ptr++;
		 }
		 printf("\n********************************************************************\n");
		 ptr=&a[n-1];
		 for(i=n;i>0;i--)
		 {
		 	printf("%d,",*ptr);
		 	ptr--;
		 }
}