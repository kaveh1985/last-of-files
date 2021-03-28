#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;
	int num;

	num = nb;
	i = 0;
while (dest[i] != '\0')
{
	i++;
}
int j;

j = 0;
while (src[j] != '\0' && j < num)
{   
	dest[i] = src[j];
	i++;
	j++;
}

dest[i] = '\0';
printf("\nOutput: %s", dest);
return dest;


}

//int main()
//{
//char dest[] = "kaveh ";
//char src[] = "how are you doing?";
//ft_strncat(dest, src, 11);
//}