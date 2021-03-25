#include <stdio.h>

void    ft_swap(int *a, int *b)
{
  int c;
  c = *a;
  *a = *b;
  *b = c;
}

void ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;

	i = 0;
	j = size - 1;
	while(i < size /2)
	{
		ft_swap(&tab[i], &tab[j]);
		i++;
		j--;
	}
}




int main()
{
	int array[3] = {1,2, 3};
	int size = 3;

    ft_rev_int_tab(array, size);
}


//void ft_rev_int_tab(int *tab, int size)
//{
 
//  int tablarger[size];
//  int i;


//  i = -1;
//  while (++i <= size -1)
//  {
//	  tablarger[i] = tab[size - i -1];
//  }

//  i = -1;
//  while (++i <= size -1)
//  {
//	  tab[i] = tablarger[i];
//  }
  
//}





//int main()
//{
//	int first = 10;
//	int second = 10;

//ft_rev_int_tab(&first, second);
//}




//void afftab(int *tab, int size)
//{
//	int i = 0;

//	while ( i < size)
//	{
//		printf("%d", tab[i]);
//		i++;
//	}
	
//}