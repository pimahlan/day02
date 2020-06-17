#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_print_numbers(void)
{
	char numbers;
	numbers = '0';
    while(numbers <= '9')
	{
		ft_putchar(numbers);
		numbers++;
	}
}

int  main(void)
{
	ft_print_numbers();
	return(0);
}
