#include <stdio.h>

int ft_str_is_lowercase(char *str)
{

int i;

i = 0;
if(str[i] == '\0')
		return 1;
	while (str[i] != '\0')
		{
			if((str[i] < 97 || str[i] > 122))
			{
				return 0;
			}
			if(str[i] == '\0')
			{
				printf("empty string");
                return 1;
			}
		  i++;
		}
	    return 1;
}



int main()
{
char *str = "kavehH";
printf("%d", ft_str_is_lowercase(str));
}