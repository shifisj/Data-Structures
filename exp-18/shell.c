#include<stdio.h>
void main( )
{
int n, a[25], i, j,k,temp;
printf( "Enter number of elements \n" );
scanf( "%d", &n );
printf( "Enter %d integers \n", n );
for ( i=0; i<n; i++ )
scanf( "%d", &a[i] );
for (k=n/2 ; k>0 ; k=k/ 2)
{
    for (i=k ; i<n ; i ++ )
{
temp = a [i] ;
for (j=i ; j>= k && a [ j - k ]>temp ; j=j - k )
{
a [j] = a[j-k] ;
}
a [j] = temp ;
}
}
printf( "Sorted list in ascending order using shell sort: \n ");
for ( i = 0 ; i < n ; i++)
printf ( "%d\t ", a[i] );
}
