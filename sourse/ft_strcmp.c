
int ft_strcmp(const char *str1, const char *str2)
{
	int i;

	i = -1;
	while((str1[++i])&&(str2[i]))
	{
		if(str1[i] != str2[i])
				return(str1[i] - str2[i]);			
	}
	return(0);
}
