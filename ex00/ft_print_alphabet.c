#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_print_alphabet(void)
{
	char al;
	al = 'a';
    while(al <= 'z')
	{
		ft_putchar(al);
		al++;
	}
}

int  main(void)
{
	ft_print_alphabet(); 	
	return(0);
}


