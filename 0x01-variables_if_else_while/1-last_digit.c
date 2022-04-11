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
int last_digit = n % 10;
srand(time(0));
n = rand() - RAND_MAX / 2;
if((last_digit) > 5)
{
  printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
}
else if((n % 10) < 6 && (n % 10) != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n);
}
else
{
  printf("Last digit of %d is %d and is 0\n", n);
}
return (0);
}
  
