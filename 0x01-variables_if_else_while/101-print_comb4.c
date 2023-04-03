#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
  int a = 0, b, c;
  
  while (a <= 9)
  {
    b = 0;
    while (b <= 9)
    {
      c = 0;
      while (c <= 9)
      {
        if (a != b && a != c && b > a && c > a && c > b)
        {
          putchar(48 + a);
          putchar(48 + b);
          putchar(48 + c);

          if (a + b != 17)
          {
            putchar(',');
            putchar(' ');
          }
        }
        ++c;
      }
      ++b;
    }
    
    ++a;
  }
  
  putchar('\n');

  return (0);
}


