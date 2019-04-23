#include <stdlib.h>

char * ft_strtrim(char const *s)
{
	unsigned int i;
	unsigned int j;
	unsigned int start;
	unsigned int end;
	char *str;
	
	str = NULL;
	i = 0;
	start  = -1;
	while(s[++start] == ' ' || s[start] == '\n' || s[start] == '\t');
	while(s[i + start])
		i++;
	while(s[(--i) + start] == ' ' || s[i + start] == '\n' || s[i + start] == '\t');
	if(!(str = (char *)malloc(sizeof(str) * i))) 
			return(NULL);
	end  = -1;
	j = -1;	
	while(s[++j])
		if(j >= start && j <= i + start)
		str[++end] = s[j];
	return(str);
}
