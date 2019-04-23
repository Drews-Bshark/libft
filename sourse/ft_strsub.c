#include <stdlib.h>
char * ft_strsub(char const *s, unsigned int start, size_t len)
{	
	char *str;
	unsigned int i;

	i = 0;
	str = NULL;
	if(start >= len)
		return(NULL);
	str  = (char *)malloc(sizeof(str) * (len - start) + 1);
	while(s[start])
		str[i++] = s[start++];
	str[i] = '\0';
	return(str);
}
