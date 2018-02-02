#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i])
    i++;
  return(i);
}

char    *ft_strrev(char *str)
{
  int i;
  char swp;

  i = 0;
  while (i < (ft_strlen(str) / 2))
  {
        swp = str[i];
        str[i] = str[ft_strlen(str) - 1 - i];
        str[ft_strlen(str) - 1 - i] = swp;
        i++;
  }
  return(str);
}

int main(int argc, char **argv)
{
  printf("%s\n", ft_strrev(argv[1]));
  return (0);
}
