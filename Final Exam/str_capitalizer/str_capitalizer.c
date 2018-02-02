#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_capitalizer(char *str)
{
  int i;

  i = -1;
  while (str[++i] != '\0')
  {
    if (str[i] >= 'a' && str[i] <= 'z' && str[i - 1] < 33)
    {
      str[i] -= 32;
      i++;
    }
    while(str[i] > 33)
    {
      if((str[i] >= 'A' && str[i] <= 'Z') && !(str[i - 1] < 33))
        str[i] += 32;
      i++;
    }
  }
  return(str);
}

int main(int argc, char **argv)
{
  char *str;
  int i;

  i = 0;
  str = ft_capitalizer(argv[1]);
while( str[i])
{
  write(1, &str[i], 1);
  i++;
}
  write(1, "\n", 1);
  return(0);
}
