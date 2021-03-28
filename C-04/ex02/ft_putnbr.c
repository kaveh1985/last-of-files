#include <unistd.h>
#include <stdio.h>


void ft_putchar(int c)
{
    write(1, &c, 1);
}


void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0 && nb != -2147483648)
	{
		ft_putchar('-');
		ft_putnbr(nb * (-1));
	}


	else if (nb >= 0 && nb < 10)
	{
        //convert the integer to char with the help of '0'
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}


// void ft_putnbr(int nb)
// {
// int div = nb;
// int mod;

// while(div!= '\0')
// {
//     mod = div % 10;
//     ft_putchar(mod + '0');
//     div = div / 10;
// }
// }



void main()
{
ft_putnbr(8);
}