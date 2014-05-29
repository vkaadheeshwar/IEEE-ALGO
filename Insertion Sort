#include<stdio.h>
int main()
{
	int a[1000],i,j,t,n;
	scanf("%d", &n);
	for(i=0; i<n; i++)	
		scanf("%d", &a[i]);
	for(i=1;i<n;i++)
	{	
		t=a[i];//to store
		j=i-1;
		while(t<a[j] && j>=0)
		{	
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=t;//insert into sorted part
	}
	for(i=0; i<n; i++)
		printf("%d ", a[i]);
	return 0;
}
