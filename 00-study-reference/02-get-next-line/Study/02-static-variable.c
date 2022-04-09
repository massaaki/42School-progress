/**
 * Static variables preserve the initial value
 */

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char * str)
{
  int i;

  i = 0;
  while (str[i] !='\0')
  {
    i++;
  }

  return i;
}

void ft_putc(char * str)
{
  int length;

  length = ft_strlen(str);
  write(0, str, length);
}


int sum_num(int num)
{
  static int total = 0;

  total += num;
  return total;
}

int main(void)
{
  ft_putc("Hello world\n");

  printf("%i\n", sum_num(10));
  printf("%i\n", sum_num(10));
  printf("%i\n", sum_num(10));
  printf("%i\n", sum_num(10));

  return (0);
}