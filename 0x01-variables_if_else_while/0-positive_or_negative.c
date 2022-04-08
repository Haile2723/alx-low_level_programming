#include <stdio.h>
int main()
{
int n;

scanf( "%d", &n );

if( n > 0 )
{
  printf( "%d is positive" );
} 
else if( n == 0 )
{
  printf( "%d is zero" );
}
else {
printf( "%d is negative" );
}
return 0;
}
