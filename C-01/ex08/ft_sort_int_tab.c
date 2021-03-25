#include <stdio.h>

void    ft_swap(int *a, int *b)
{
  int c;
  c = *a;
  *a = *b;
  *b = c;
}



void afftab(int *tab, int size)
{
	int i = 0;

	while ( i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	
}


void ft_sort_int_tab(int *tab, int size)
{

    int i = 0;
    int j = 1;

	while (i <= size - 1)
	{
		while (j <= size - 1)
		{
			if(tab[i] > tab[j])
			{
               ft_swap(&tab[i], &tab[j]);
			}
			
			j++;
		}
		i++;
	}
}



int main()
{
int array[6] = {2, 1, 3, 5, 4, 6};
int size = 6;
ft_sort_int_tab(array, size);
afftab(array, size);

}
