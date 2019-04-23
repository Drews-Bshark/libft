
int ft_strncmp(const char *str1, const char *str2, const int n)
{
	int i;

	i = -1;
	while((str1[++i])&&(str2[i]) && i < n)
	{
		if(str1[i] != str2[i])
				return(str1[i] - str2[i]);			
	}
	return(0);
}
