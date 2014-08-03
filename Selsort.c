/* C Program to Implement Selection Sort */
#include<stdio.h>
#define max 50
void selsort(int, int[]);


void main()
{
	int i, size, data[max];
	printf("\nEnter no of Elements:");
	scanf("%d",&size);
	printf("\nEnter Elements:");
	for(i=1;i<=size;i++)
		scanf("%d",&data[i]);
	printf("\nUnsorted data:\n");
	for(i=1;i<=size;i++)
		printf("%d\t",data[i]);
	selsort(size, data);
	getch();
}

void selsort(int n, int data[])
{
	int i, j, min, temp;
	printf("\nSorted List is:\n");
	for(i=1;i<=n-1;i++)
	{
		min = i;
		for(j=i+1;j<=n;j++)
		{
			if(data[j]<data[min])
				min = j;
		}
		//swapping using temporary variable
		temp=data[i];
		data[i]=data[min];
		data[min]=temp;
	}
	for(i=1;i<=n;i++)
		printf("\t%d",data[i]);
}
