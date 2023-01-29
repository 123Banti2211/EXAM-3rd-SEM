#include<stdio.h>
int main()
{
    int a[]={12,54,65,7,23,9};
    int size=sizeof(a)/sizeof(a[0]);
    printf("Unsorted Array: ");
    printarray(a,size);
    Bubblesort(a,size);
    printf("\nSorted Array: ");
    printarray(a,size);

    return 0;
}

void Bubblesort(int a[],int size)
{
	int temp,i,j;
	for ( i=0;i<size-1;i++) //For number pass
	{
		for( j=0;j<size-1-i;j++) // For comparison in each pass
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
void printarray(int a[],int size)
{
	int i;
    for( i=0;i<size;i++)
    {
        printf("%d \t",a[i]);
    }
}
