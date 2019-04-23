#include <string.h>

char *ft_strncat(char *str1, char *str2, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while(str1[i])
		i++;
	while(str2[j] == '\0' && j < n)
	{
		str1[i] = str2[j];
		i++;
		j++;
	}
	str1[i] = '\0';
	return(str1);
}
