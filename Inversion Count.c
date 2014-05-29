#include<stdio.h>
int merge(int A[],int l,int m,int u)
{
	int a,b,c,C[1000],inv=0;
	for(a=l,b=m,c=0;a<m && b<=u;)
	{	
		if(A[a]<=A[b]) 
			C[c++] = A[a++];
		else
		{	
			inv+=mid-i;
			C[c++] = A[b++];
		}
	}
return inv;
}

int mergesort(int a[],int l,int u)
{
	int inv=0;
	if(l<u)
	{
		int mid=(l+u)/2;
		inv=mergesort(a,l,mid);
		inv+=mergesort(a,mid+1,u);
		inv+=merge(a,l,mid+1,u);
	}
return inv;
}

int main() 
{
	int a[1000],i,n,inv;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	inv=mergesort(a,0,n-1)
		printf("%d",inv);
return 0;
}	
