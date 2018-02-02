#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

char    *ft_strdup(char *src)
{
  char *dest;
  int i;

  dest = (char*)malloc((sizeof(char) * ft_strlen(src)));
  while (src[i])
  {
    dest[i] = src[i];
    i++;
  }
  return (dest);

int   main(int argc, char **argv)
{
  char *a = argv[1];
  char *b = ft_strdup(a);

  printf("%s\n", b);
  return (0);
}
