
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,item;
	printf("Enter array size:");
	scanf("%d",&n);
	int a[n];
	printf("**ARRAY ELEMENTS MUST BE IN SORTED ORDER**\n");
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter a element you want to search:");
	scanf("%d",&item);
	Binarysearch( a, item, n);
	return 0;
}

int Binarysearch(int a[],int item, int n)
{
	int low=0, high=n-1, mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(item==a[mid])
		{
			printf("%d is found at %d position.",item,mid+1);
			return;
		}
		else if(item>a[mid])
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	printf("VALUE IS NOT PRESENT IN THE ARRAY..");
}

