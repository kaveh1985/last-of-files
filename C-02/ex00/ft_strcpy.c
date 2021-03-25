#include <stdio.h>


char	*ft_strcpy(char * dest,  char * src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}



//int main() {
//   char str1[] = "C programming";
//   char str2[] = "eeeeeeeeeeeeeeee";
//   char str22[20];
//   printf("%s", ft_strcpy(str2, str1));
//   return (0);
//}