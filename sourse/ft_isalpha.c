
int ft_isalpha( int ch)
{
	if(('a'<=ch && ch >= 'z') || ('A' <= ch && ch>= 'Z'))
		       return(1);
	return(0);
}
