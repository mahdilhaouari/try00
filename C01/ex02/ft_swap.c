#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int nb;
    nb = *a;  
    *a = *b; 
    *b = nb;  
}
/*int main()
{
    int a = 1;
    int b = 2;
    printf("a: %d\n",a);
    printf("b: %d\n",b);
    ft_swap(&a, &b);
    printf("a: %d\n",a);
    printf("b: %d\n",b);
}*/