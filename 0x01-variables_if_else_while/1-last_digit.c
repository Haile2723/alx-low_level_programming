#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Print the given number as greater than 5, zero and less than 
 *6 and greater than 0.
 *Return: Always 0.
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if((n % 10) > 5)
{
printf("Last digit of %d is %d&n and is greater than 5\n", n);
}
else if((n % 10) < 6 && (n % 10) != 0)
{
printf("Last digit of %d is %d&n and is less than 6 and not 0\n", n);
}
else
{
  printf("Last digit of %d is %d and is 0\n", n);
}
return (0);
}
  
