#include <unistd.h>

void ft_putchar(char c)
{
		write(1,&c,1);
}

void ft_print_comb2(void)
{
		char num;
		char num1;

		num = '0';
		while(num <= '9')
		{
			num1 = num +1;
			while( num1 <= '9')
			{
					ft_putchar(num);
					ft_putchar(num1);
				  if(!(num1 =='9'))
				  	  write(1,", ",2);
				num1++;
			}
			num++;
		}
		write(1,"\n",1);
}

int  main(void)
{
		ft_print_comb2();
			return(0);
}
