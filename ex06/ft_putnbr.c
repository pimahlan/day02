#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_putnbr(int nb)
{	
	char i;
	int nb_copy;
	int mod;

	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	nb_copy = nb;
	if (nb_copy >= 100)
	{
		mod = nb_copy % 100;
		ft_putchar((nb_copy/100)+'0');
		ft_putchar((mod/10)+'0');
		mod = mod % 10;
		ft_putchar(mod + '0');

	}
	else if(nb_copy >=10)
	{
		mod = nb_copy % 10;
	   	ft_putchar((nb_copy/10) + '0');
		ft_putchar(mod + '0');
	}
	else
		ft_putchar(nb + '0');
   
    ft_putchar('\n');
}

int main(void)
{
	ft_putnbr(-142);
	return(0);
}
