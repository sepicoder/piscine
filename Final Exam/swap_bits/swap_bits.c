#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
  unsigned char a;
  unsigned char b;

  a = octet >> 4;
  b = octet << 4;
  return ( b | a );
}

int main(void)
{
  printf("%d", swap_bits(65));
  return (0);
}
