#include <unistd.h>

void ft_comb(void)
{
    char i = '0';
    while(i <= '7')
    {
        char j = i + 1;
        while(j <= '8')
        {
            char k = j + 1;
            while(k <= '9')
            {
                write(1, &i, 1);
                write(1, &j, 1);
                write(1, &k, 1);
                if(i != '7')
                {           
                    write(1, ",", 1);
                    write(1, " ", 1);
                }
                k++;
            }
            j++;
        }
        i++;
    }
}
int main()
{
    ft_comb();
}