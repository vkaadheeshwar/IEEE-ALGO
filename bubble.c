#include<stdio.h>
int main( )
{
     int a[100]; 
     int i, j, temp, n ;
     printf("How many numbers you want to sort : \n");
     scanf("%d",&n);
     printf("Enter %d number values you want to sort\n", n);
     for(j=0; j<n; j++)
     scanf("%d",&a[j]);
     
     for(j=1;j<n;j++)
     {
          for(i=0; i<n; i++)
          {
               if(a[i]>a[i+1])
               {
                     temp=a[i];
                     a[i]=a[i+1];
                     a[i+1]=temp;
               } 
          }
     }
     
     printf ( "\n\nArray after sorting:\n") ;
    
     for ( i = 0 ; i <n ; i++ )
		printf ( "%d\t", a[i] ) ;
 }
