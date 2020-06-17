#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_print_reverse_alphabet(void)
{
	char al;
	al = 'z';
    while(al >= 'a')
	{
		ft_putchar(al);
		al--;
	}
}

int  main(void)
{
	ft_print_reverse_alphabet();
	return(0);
}
