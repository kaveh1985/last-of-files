#include <stdio.h>
#include <string.h>

int takeLengh(char *str)
{
	int i = 0;
	while (str[i] != '\0') 
	{
		i++;
	}
	return i;
}



char *ft_strstr(char *str, char *to_find)
{
int i = 0;
while (to_find[i] != '\0')
{
	while (str[i]!= '\0')
	{
		if(to_find[i] == str[i]){
			
		}
	}
	
	
}

}
















int main () {
   const char str[40] = "Hello, how are thank you are?";
   const char searchString[10] = "thanks";
   char *result;

   /* This function returns the pointer of the first occurrence
    * of the given string (i.e. searchString) 
    */ 
   result = strstr(str, searchString);
   printf("%s",result);
   return 0;
}