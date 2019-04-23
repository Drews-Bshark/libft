#include <stdlib.h>

char *ft_strmap(char const *s, char (*f)(char))
{
	char *str;
	int i;
	
	i = -1;
	str = NULL;
	while(s[++i]);
	str  = (char *)malloc(sizeof(str) * i + 1);
	str[i] = '\0';
	i = -1;
	while(s[++i])
		str[i] = f(s[i]);
	return(str);
		


}
