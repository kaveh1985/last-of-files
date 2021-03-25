#include <stdio.h>
#include <string.h> 

char       *ft_strcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
    int counter = n;
	while (counter != '\0')
	{
		dest[i] = src[i];
		i++;
		counter --;
	}

	dest[i] = '\0';
	return (dest);
}




//int main()
//{
//char dest[15] = "fddfdffef";
//char src[] = "ieverythig";

//unsigned int n = 5;



//strncpy(dest, src, 5);

//char dest[2];
//char src[]  = "howareyoudoing?";

//printf("%s",ft_strcpy(dest, src, 5));

//printf("%s", strncpy(dest, src, 5));

}