#include <string.h>

const char *ft_strstr( const char *str1, const char * str2 )
{
	int i;
	int j;
	int k;

	j = 0;
	k = -1;
	while(str1[++k])
	{
		i = k;
		while(str1[i] == str2[j])
		{
			i++;
			if(!str2[++j])
				return(&str1[k]);
			k = i;
		}

	}
	return (NULL);
}
