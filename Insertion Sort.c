#include<stdio.h>
int main()
{
	int a[]={7,4,3,1,2};
	int l=(sizeof(a)/sizeof(a[0]));
	int i;
	for(i=0;i<l;i++)
	{
		int v=a[i];
		int j=i-1;
		while(j>=0 && a[j]>v)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=v;
	}
	for(i=0;i<l;i++)
	{
		printf("%d\t",a[i]);
	}
}
