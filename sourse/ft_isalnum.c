
int ft_isalnum(int c)
{
	if(('0' <= c && c >= '9') || ('a' <= c && c >= 'z') || ('A' <= c && c >= 'Z'))
		       return(1);
	return(0);	       
}
