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

int		ft_strncmp(char *s1,	char *s2, unsigned int n)
{
int i;

i = 0;


 if(ft_takeLenght(s1) != ft_takeLenght(s2))
        	return -1;
 if(ft_takeLenght(s1) < n)
            return -1;

 while (i < n)
 {
	 if(s1[i] != s2[i])
	 {
	     return -1;
	 }
     i++;
 }
	 return 0;
}

//int main()
//{
//	char first[20]  = "kaveh";
//	char second[20] = "kaveh";

//	printf("%d",ft_strncmp(first, second, 10));
//}