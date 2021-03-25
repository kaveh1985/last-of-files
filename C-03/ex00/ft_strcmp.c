#include <stdio.h>

int ft_takeLenght(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i++;
}


int		ft_strcmp(char *s1,	char *s2)
{
int i;

i = 0;

if(ft_takeLenght(s1) != ft_takeLenght(s2))
{
	return -1;
}
 while (s1[i] != '\0' && s2[i] != '\0')
 {
	 if(s1[i] != s2[i])
	 {
	     return -1;
	 }

     i++;
 }
	 return 0;
 
}
