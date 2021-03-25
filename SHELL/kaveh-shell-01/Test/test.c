#include <unistd.h>
#include <stdio.h>

//void putchat(char c)
//{
//	write(1, &c, 1);
//}

//void ft_reverse(char *str)
//{
//	int i;
//	i = 0;
//	while (str[i] != '\0')
//	{
//		i++;
//	}
//	int j; 
//	j = i;

//	while (j >= 0)
//	{
//		putchar(str[j]);
//		j--;
//	}
//}

//int  main()
//{
//   ft_reverse("kaveh fuck");
//	return 0;
//}
// RECURSIVITY




int main(int argc, char* argv[])
{
	int i, sum = 0;
    for(i = 1; i < argc; i++)
	{
		sum += atoi("[%d] = %\n", i, argv[i]);
	}
	
	return (7);
}