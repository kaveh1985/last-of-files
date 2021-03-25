#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

char string_to_integer(char *str)
{
int res = 0;

 for (int i = 0; str[i] != '\0'; ++i) {
     if (str[i] > '9' || str[i] < '0')
         return -1;
     res = res * 10 + str[i] - '0';
 }
// if(isdigit(res))
// {
//	 printf("fuck yah");
// }

 return res;
}




void ft_table()
{
	int j = 0; 
  while (j < 4)
	{
		int i = 0;
	  while (i < 4)
		 {
			printf("%d ", i);
			i++;
		 }
		 printf("\n");
		 j++;	  	
	  }
 }


int main()
{
	printf("%d ", string_to_integer("90"));
	return (0);
}
