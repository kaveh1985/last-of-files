#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	
	i = 0;
while (dest[i] != '\0')
{
	i++;
}
int j;

j = 0;
while (src[j] != '\0')
{   
	dest[i] = src[j];
	i++;
	j++;
}

dest[i] = '\0';
printf("\nOutput: %s", dest);
return dest;

}


int main()
{
	char dest[] = "";
	char src[] = "how are you?";
	ft_strcat(dest, src);
}
