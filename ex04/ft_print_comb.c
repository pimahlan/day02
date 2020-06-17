#include <unistd.h>

void ft_putchar(char c)
{
		write(1,&c,1);
}

void ft_print_comb(void)
{
		char num;
		char num1;
		char num2;
		
		num = '0';
		while(num <= '7')
		{
			num1 = num +1;
			while( num1 <= '8')
			{
				num2 = num1+1;
				while( num2 <= '9')
				{
					ft_putchar(num);
					ft_putchar(num1);
					ft_putchar(num2);
				  if(!(num =='7'))
				  	  write(1,", ",2);
					num2++;				
				}
				num1++;
			}
			num++;
		}
		write(1,"\n",1);
}

int  main(void)
{
		ft_print_comb();
			return(0);
}
