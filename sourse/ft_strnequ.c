#include <stdlib.h>
int ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	while((*s1++ == *s2++) && (*s1 || *s2) && (i++ < n));
	if(i == n)
		return(1);
	return(0);
}
