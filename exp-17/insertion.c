#include<stdio.h>
void main( ){
int n, a[ 25 ], i, j, temp;
printf( "Enter number of elements \n" );
scanf( "%d", &n );
printf( "Enter %d integers \n", n );
for ( i = 0; i < n; i++ )
scanf( "%d", &a[i] );
for ( i = 0 ; i < n; i++ ){
temp=a[i];
for (j=i;j > 0 && a[ j -1]>temp;j--)
{
a[ j ] = a[ j - 1 ];
}
a[j]=temp;}
printf( "Sorted list in ascending order: \n ");
for ( i = 0 ; i < n ; i++)
printf ( "%d \n ",a[i]);
}
