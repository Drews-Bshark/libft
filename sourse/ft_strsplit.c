#include <stdlib.h>

char  *space(char const *s, char c, int k)
{
	char *str;
	int i;
	i = 0;
	while(s[i + k] != c)
		i++;	
	if(!(str = (char *)malloc(sizeof(str) * i)))
		return(NULL);
	i = 0;
	while(s[i + k] != c && (s[i + k] != '\0'))
	{
		str[i] = s[i + k];
		i++;
	}
	str[i] ='\0';
       	return(str);	

}
char **ft_strsplit(char const *s, char c)
{
	int i;
	int j;
	char **str;
	int k;
	j = 0;
	i = -1;
	k = 0;
	while(s[++i]) 
		if(s[i] == c)
			j++;
	str = (char **)malloc(sizeof(str) * (j + 1));
	i = 0;
	while(i < j)
	{
		str[i] = space(s, c, k);		
		i++;
		while(s[k] != c )
			k++;
		k++;
	}
	str[i] = NULL;
	return(str);
}
