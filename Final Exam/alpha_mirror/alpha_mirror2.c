#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    while (*str)
    {
        ft_putchar(*str);
        str++;
    }
}

void    alpha_mirror(char *str)
{
    int count;

    count = 0;
    while (str[count])
    {
        if (str[count] >= 'a' && str[count] <= 'z')
            str[count] = 'm' - str[count] + 'n';
        else if (str[count] >= 'A' && str[count] <= 'Z')
            str[count] = 'M' - str[count] + 'N';
        count++;
    }
    ft_putstr(str);
}

int        main(int args, char **argv)
{
    if (args == 2)
    {
        alpha_mirror(argv[1]);
    }
    ft_putchar('\n');
    return (0);
}
