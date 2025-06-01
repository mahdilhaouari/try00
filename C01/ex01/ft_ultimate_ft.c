#include <unistd.h>
#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}
int main()
{
    int *pt1, **pt2, ***pt3, ****pt4, *****pt5, ******pt6, *******pt7, ********pt8, *********pt9;
    int nb = 22;
    pt1 = &nb;
    pt2 = &pt1;
    pt3 = &pt2;
    pt4 = &pt3;
    pt5 = &pt4;
    pt6 = &pt5;
    pt7 = &pt6;
    pt8 = &pt7;
    pt9 = &pt8;
    ft_ultimate_ft(pt9);
    printf("la valeur de nb est: %d",nb);
}