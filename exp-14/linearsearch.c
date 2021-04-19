#include <stdio.h>
void main( )
{
int a [10],n,i,search,count = 0 ;
printf ( " Enter the number of elements \t " ) ;
scanf ( "%d" , & n ) ;
printf ( "\n Enter %d numbers \n",n) ;
for (i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\n Array Elements \n ");
for(i=0;i<n;i++)
printf ("%d\t",a[i]);
printf ( "\n \n Enter the Element to be searched: \t " ) ;
scanf("%d",&search);
for(i=0;i<n;i++)
{
if (search==a[i])
count++;
}
if (count==0)
printf( "\n Element %d is not present in the array ",search) ;
else
printf ( " \n Element %d is present %d times in the array \n ",search,count ) ;
}
