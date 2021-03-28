#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
int i = 0;
while(str[i] != '\0')
{
    ft_putchar(str[i]);
    i++;
}
}

// void main()
// {
// char *test = "kaveh";
// ft_putstr(test);
// }