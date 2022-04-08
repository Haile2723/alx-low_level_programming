#include <stdio.h>
int main()
{
int n;

scanf( "%d", &n );

if( n > 0 )
{
printf( &n "is posetive" );
}
else if( n == 0 )
{
printf( &n "is zero" );
}
else {
printf( &n "is negative" );
}
return 0;
}
