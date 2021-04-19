#include<stdio.h>
void main(){
int a [5] = { 4, 5, 2, 3, 6 } , i = 0;
void Radix_sort ( int a [ ] , int n);
Radix_sort(a,5);
printf( " After Sorting :" ) ;
for ( i = 0 ; i < 5 ; i ++ )
printf ( " %d ", a[ i ] ) ;}
void Radix_sort ( int a[ ] , int n ){
int bucket [10] [5] , buck [ 10 ] , b [ 10 ] ;
int i , j , k , l , num , div , large , passes ;
div = 1 ;
num = 0 ;
large = a [ 0 ] ;
for ( i = 0 ; i < n ; i ++ ){
    if ( a[ i] > large ){
large = a [ i ] ;
}
while ( large > 0 )
{
num ++ ;
large = large / 10 ;
}
for (passes=0 ; passes < num ; passes ++ )
{
for (k=0 ; k < 10 ; k ++ )
{
buck [k] = 0 ;
}
for ( i = 0 ; i < n ; i ++ )
{
l = ((a[i] / div) % 10 ) ;
bucket [ l ] [buck[l] ++] = a[i] ;
}
i=0;
for ( k=0;k < 10; k++ )
{
for(j=0;j<buck[k];j++ )
{
a[i++]=bucket[ k ][ j ] ;
}
}
div*= 10 ;
}
}
}
