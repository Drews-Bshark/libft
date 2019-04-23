#include <unistd.h>
char *ft_itoa(int n);
void ft_putnbr_fd(int n, int fd)
{
	char *str;
	int i;
	
	i = -1;
	str = ft_itoa(n);
	while(str[++i])
		write(fd, &str[i],1);

}
