#include <stdlib.h>
char *ft_strjoin(char const *s1, char const *s2)
{
	unsigned int i;
	unsigned int j;
	char *str;

	str = NULL;
	i = 0;
	j = 0;
	while(s1[i++]);
	while(s2[j++]);
	str = (char *)malloc(sizeof(s1) * (i + j));
	i = 0;
	while(*s2)
	{
		if(*s1)
			str[i] = *s1++;
		else
			str[i] = *s2++;
		i++;
	}
	str[i] = '\0';
	return(str);
}
