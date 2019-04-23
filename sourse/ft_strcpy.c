char * ft_strcpy( char *instr, const char *outstr )
{
	int i;
	
	i = -1;
	while(outstr[++i])
		instr[i] = outstr[i];
	instr[i] = '\0';
	return(instr);
}

