#include<stdio.h>
void main(){
int a [ 10 ] , n , i , search, count = 0 ;
void Binary_search ( int a[ ] , int n , int search );
printf ("Enter the number of elements \t") ;
scanf ("%d",&n);
printf("\nEnter the numbers\n") ;
for (i = 0; i<n;i++)
scanf("%d",&a[i]);
printf("\nArray Elements\n") ;
for (i = 0 ; i < n ; i ++ )
printf("%d\t",a[i]) ;
printf ("\n\nEnter the Element to be searched:\t");
scanf("%d",&search );
Binary_search(a,n,search);
}
void Binary_search ( int a[ ] , int n , int search ){
int first, last, mid ;
first = 0 ;
last = n-1 ;
mid = (first + last ) / 2 ;
while (first<=last ){
if(search>a[mid])
first = mid + 1 ;
else if (search==a[mid])
{
printf("Element is present in the list");
break ;
}else
last = mid - 1 ;
mid = ( first + last ) / 2 ;
}
if( first > last )
printf("Element Not Found");}

