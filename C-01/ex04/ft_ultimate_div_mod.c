#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
int div;
int mod;

div = *a / *b;
mod = *a % *b;
*b = mod;
*a = div;

}