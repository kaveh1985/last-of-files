#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
 
  int tablarger[size];
  int i;


  i = -1;
  while (++i <= size -1)
  {
	  tablarger[i] = tab[size - i -1];
  }

  i = -1;
  while (++i <= size -1)
  {
	  tab[i] = tablarger[i];
  }
  
}





int main()
{
	int first = 10;
	int second = 10;

ft_rev_int_tab(&first, second);
}