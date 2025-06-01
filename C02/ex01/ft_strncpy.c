#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n) //dik nejma bax dreturne string ida ma9inahaxi radreja3 ra 7arf
{
    unsigned int i;
    i = 0;
    while (src[i] != '\0' && i < n) 
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)// had while zidnaha bax la kanet dest kadhoz ktar men src kane7tajo ana dik blayes li b9aw n3amrohom b \0 3liha hadi kad3amrom kamlin
    {
        dest[i] = '\0';
        i++;
    }
    return dest;  
}
int main()
{
    char src[20] = "ahlan";
    char dest[20];
    ft_strncpy(dest, src, 3);
    printf("%s",src);
}

