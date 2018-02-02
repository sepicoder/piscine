#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_inter(char **argv)
{
	char *string1 = argv[1];
	char *string2 = argv[2];
	char chars[1000];
	int count1;
	int count2;
	int count3;

	count1 = 0;
	count2 = 0;
	count3 = 0;
	while (string1[count1])
	{
		count2 = 0;
		while (string2[count2])
		{
			if (string1[count1] == string2[count2])
			{
				count2 = 0;
				chars[count3] = string1[count1];
				count3++;
				while (string1[count2])
				{
					if (string1[count2] == chars[count3 - 1])
						string1[count2] = '\n';
					count2++;
				}
				break;
			}
			count2++;
		}
		count1++;
	}
	chars[count3] = '\0';
	count3 = 0;
	ft_putstr(chars);
}

int		main(int args, char **argv)
{
	if (args == 3)
	{
		ft_inter(argv);
	}
	ft_putchar('\n');
	return (0);
}
