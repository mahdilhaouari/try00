#include <unistd.h>

void ft_print_numbers(void)
{
    int a;
    a = '1';
    while (a <= '9')
    {
        write(1, &a, 1);
        a++;
    }
}

int main()
{
    ft_print_numbers();
}