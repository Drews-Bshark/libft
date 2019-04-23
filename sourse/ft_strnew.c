#include <stdlib.h>

char *ft_strnew(size_t size)
{
	char *str;	
	size_t i; 

	i = 0;
	if(size + 1 < size)
		return(NULL);
	str = NULL;
	if(!(str = (char *)malloc(sizeof(str) * size + 1)))
		return(NULL);
	while(i <= size)
		str[i++] = '\0';
	return(str);
}
