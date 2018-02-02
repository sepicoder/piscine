#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void last_word(char *str)
{
  char *string;

  while (*str)
  {
    while (*str && (*str == ' ' || *str == '\t'))
      str++;
	if (*str && *str != ' ' && *str != '\t')
    string = str;
    while (*str && *str != ' ' && *str != '\t')
    	str++;
  }
  while (*string && *string != ' ' && *string != '\t')
      ft_putchar(*string++);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	ft_putchar('\n');
	return (0);
}
