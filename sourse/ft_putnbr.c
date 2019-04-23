#include <unistd.h>

char *ft_itoa(int n);
void ft_putnbr(int n)
{
	char *str;
	int i;
	
	i = -1;
	str = ft_itoa(n);
	while(str[++i])
		write(1,&str[i],1);


}
