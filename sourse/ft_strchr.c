#include <string.h>
int ft_strlen(const char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}
 char *ft_strchr( const char *str, int n )
{
	int i;

	i = -1;
	if(n == '\0')
		return((char *)str + ft_strlen(str));
	while(str[++i] != '\0')
	{
		if(str[i] == n)
		       return((char *)str + i);	
	}
	return(NULL);
}
