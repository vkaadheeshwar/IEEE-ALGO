#include<stdio.h>
void merge(int A[],int l,int m,int u)
{
	int a,b,c,C[1000];
	for(a=l,b=m,c=0;a<m && b<=u;)
	{	
		if(A[a]<=A[b]) 
			C[c++] = A[a++];
		else	
			C[c++] = A[b++];
	}
	if(a<m)
		while(a<m)
			C[c++] = A[a++];
	else
		while(b<=u)
			C[c++] = A[b++];
	for(a=l;a<u-l+1;a++)
		A[l+a]=C[a];
}

void mergesort(int a[],int l,int u)
{
	if(l<u)
	{
		int mid=(l+u)/2;
		mergesort(a,l,mid);
		mergesort(a,mid+1,u);
		merge(a,l,mid+1,u);
	}
}

int main() 
{
	int a[1000],i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",a[i]);
	mergesort(a,0,n-1);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
return 0;
}	
