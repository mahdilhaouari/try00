#include <stdio.h>

char    *ft_strcapitalize(char *str)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if((str[i] >= 'a' && str[i] <= 'z') && str[i - 1] <= 47)
            str[i] -= 32;
        i++;
    }
    return str;
}
