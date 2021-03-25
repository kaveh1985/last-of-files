#include <stdio.h>


int		ft_str_is_alpha(char *str)
{
int i;

i = 0;
int counter = 0;

if(str[i] == '\0')
		return 1;
	while (str[i] != '\0')
		{
			if((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122))
			{
				return 0;
			}
			i++;
			counter++;
		}
	    return 1;

}



int main()
{
char *str = "KAVEH";
printf("%d",ft_str_is_alpha(str));
}