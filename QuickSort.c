/************************************************************************************

	Quick sort with random pivot element. O(NlogN).

************************************************************************************/


#include <stdlib.h>
#include <stdio.h>
const int MAXN = 105000;

int n,a[MAXN];
void swap(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
}


void qsort(int l, int r) 
{
	if (l >= r)
		return;
	int pivot = l + rand() % (r - l);
	int key = a[pivot];

	int i = l, j = r;
	while (i <= j) 
	{
		while (a[i] < key)
			i++;
		while (a[j] > key)
			j--;
		if (i <= j) 
		{
			swap(a[i], a[j]);
			i++; j--;
		}
	}

	if (l < j)
		qsort(l, j);
	if (i < r)
		qsort(i, r);	
}

int main() 
{
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);

	qsort(1, n);

	for (int i = 1; i <= n; i++)
		printf("%d ", a[i]);

	return 0;
}
