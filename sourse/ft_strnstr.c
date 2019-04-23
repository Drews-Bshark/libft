#include <string.h>

char *ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t i;
	size_t j; 
	
	i = -1;
	if(!(str2))
		return((char *)str1);
	while(str1[++i] != '\0' && i < n )
	{
		j = 0;
		while(str1[i + j] == str2[j] && str1[i + j] != '\0' && i + j < n)
		{ 
			if(str2[++j] == '\0')
				return((char *)str1 + i);	
		}	
	}
	return(NULL);	
}
