

static void skip_atoi(const char **str, int *sig)
{
	while(**str == ' ' || **str == '\n'
	|| **str == '\t' || **str == '\r'
	|| **str == '\v' || **str == '\f')
		(*str)++;
	if(**str == '+' || **str == '-')
	{
		if(**str == '-')
			*sig  = -1;
		(*str)++;
	}
	while(**str == '0')
		(*str)++;
}

int ft_atoi(const char *str) 
{
	int sig;
	long int number;

	sig = 1;
	number = 0;
	skip_atoi(&str, &sig);
	while('0'<= *str && *str <= '9')
	{	
		if ((number * 10 +  *str - '0') < number)
		{
			if(sig == 1)
				return(-1);
			else
				return(0);
		}

		number = number * 10 + *str - '0';
		str++;
	}
	return(number * sig);
}
