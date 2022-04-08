#include <stdio.h>
int main()
{
int n;

scanf( "%d", &n );

if( n > 0 )
{
printf( "Is posetive" );
}
else if( n == 0 )
{
printf( "Is zero" );
}
else {
printf( "Is negative" );
}
return 0;
}
