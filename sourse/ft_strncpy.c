
char * ft_strncpy( char *instr, const char *outstr, const int n)
{
	int i;
	
	i = -1;
	while(outstr[++i] && i < n)
		instr[i] = outstr[i];
	instr[i] = '\0';
	return(instr);
}

