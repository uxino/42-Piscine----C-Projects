#include <unistd.h>
void ft_putchar();

void rush(int x, int y)
{
    int satir = 0;
    int sutun = 0;
    
    while (satir < y)
    {
        sutun = 0;
        
        while (sutun < x)
        {
            if (satir == 0)
            {
                if (sutun == 0)
                    ft_putchar('A');
                else if (sutun == x - 1)
                    ft_putchar('C');
                else
                    ft_putchar('B');
            }
            else if (satir == y - 1)
            {
                if (sutun == 0)
                    ft_putchar('A');
                else if (sutun == x - 1)
                    ft_putchar('C');
                else
                    ft_putchar('B');
            }
            else
            {
                if (sutun == 0 || sutun == x - 1)
                    ft_putchar('B');
                else
                    ft_putchar(' ');
            }
            
            sutun++;
        }
        
        ft_putchar('\n');
        satir++;
    }
}
