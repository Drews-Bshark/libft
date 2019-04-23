#include <unistd.h>
#include <string.h>

void ft_putendl(char const *s)
{
	int i;
	char c;
	
	c = '\n';
	i = -1;
	while(s[++i])
		write(1,&s[i],1);
	write(1,&c,2);
}
