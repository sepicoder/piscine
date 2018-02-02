#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
void    ft_aff_a(char *str)
{
    int find;
    int a_found;

    a_found = 0;
    find = 0;
    while (str[find])
    {
        if (str[find] == 'a')
            a_found = 1;
        find++;
    }
    if (a_found)
        ft_putchar('a');
    ft_putchar('\n');
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        ft_putchar('a');
        ft_putchar('\n');
    }
    ft_aff_a(argv[1]);
}
