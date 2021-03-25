#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
int c;
c = a/b;
*div = c;
c= a%b;
*mod = c;
}
