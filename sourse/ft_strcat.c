#include <string.h>

char *ft_strcat(char *str1, const char *str2)
{
	int i;
	int j;

	i = -1;
	j = -1;
	while(str1[++i]);
	while (str2[++j])
	{
		str1[i] = str2[j];
		i++;
	}
	str1[i] = '\0';
	return(str1);
}
