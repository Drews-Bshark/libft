# include  <string.h>

int ft_memcmp(void* memptr1, void* memptr2, size_t num)
{
	size_t i;

	i = -1;
	while(++i < num)
		if(((unsigned char*)memptr1)[i] != ((unsigned char *)memptr2)[i])
			return(1);
	return(0);
	
}

