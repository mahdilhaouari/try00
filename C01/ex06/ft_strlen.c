#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return(i);
}
int main()
{
    char ana[] = "ahlan ana ";
    int x;
    x = ft_strlen(ana);
    printf("x est : %d\n", x);
}