#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
    int first;
    int last;
    int tmp;

    first = 0;
    last = size - 1;

    while (first < last)
    {
        tmp = tab[first];
        tab[first] = tab[last];
        tab[last] = tmp;
        first++;
        last--;
    }
    
}

int main()
{
    int i;
    int arr[3] = {1,2,3};

    ft_rev_int_tab(arr, 3);
    i = 0;
    while (i < 3)
    {
        printf("%d",arr[i]);
        i++;
    }

    return 0;
}