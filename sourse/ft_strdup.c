#include  <string.h>
#include  <stdlib.h>

int ft_strlen(char *c)
{
	int i;

	i = 0;
	while(c[i++]);
	return(i + 1);
}
char * ft_strdup(char *str)
{
	char * c;
	int i;
	
	i = -1;
	c = (char *)malloc(sizeof(char *) *ft_strlen(str));
	while (str[++i])
		c[i] = str[i];
	return(c);
	


}
