#include <unistd.h>

void printreplace(char *str, char a, char b)
{
  while(*str)
  {
    if(*str == a)
      write(1, &b, 1);
    else
      write(1, str, 1);
    str++;
  }
}

int main(int argc, char **argv)
{
  if(argc == 4)
  {
    printreplace(argv[1],*argv[2],*argv[3]);
  }
  write(1, "\n", 1);
  return (0);
}
