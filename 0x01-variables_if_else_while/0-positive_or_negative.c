#include <stdio.h>
int main()
{
  int n;
  
  scanf( "%o", &n);
 if (n > 0)
{
  printf("%o is positive", n);
} 
 else if (n < 0)
{
  printf("%o is negative", n);
}
else {
  printf("%o is zero", n);
}
 return 0;
}
