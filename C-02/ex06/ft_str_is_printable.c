#include <stdio.h>

int ft_str_is_printable(char *str)
{

int i;

i = 0;
	if(str[i] == '\0')
		return 1;
	while (str[i] != '\0')
		{
			if((str[i] > 31))
			{
				return 1;
			}
		  i++;
		}
	    return 0;
}



//int main()
//{
//char *str = "4k";
//printf("%d", ft_str_is_printable(str));
//}