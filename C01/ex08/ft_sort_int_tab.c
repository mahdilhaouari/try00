#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int c;
	int i = 0;
	while(i < size - 1)
	{
		int j = 0;
		while(j < size - 1)
		{
			if(tab[j] > tab[j + 1])
			{
				c = tab[j];
			       tab[j] = tab[j + 1];
		       	       tab[j + 1] = c;	       
			}
		j++;
		}

		i++;
	}

}
int main()
{
	int tab[] = {9,8,7,63,5,4,3,2,1};
	int size = 9;
	ft_sort_int_tab(tab, size);
	for(int i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}
	printf("\n");
	return 0;

}
