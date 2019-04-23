#include <string.h>

int ft_strlen(const char *str)
{
	int i;

	i = -1;
	while(str[++i]);
	return(i);
}

char *ft_strrchr(const char *str, int n)
{
	char *str_r;

	str_r = NULL;
	if (n == '\0')
		return((char *)str + ft_strlen(str));
	while(*str)
	{
		if(n == *str)
			str_r =(char *)str;
		str++;
	}
	return(str_r);
}
