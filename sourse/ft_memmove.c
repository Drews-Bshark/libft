# include  <stdlib.h>

void *ft_memmove(void *dest, void *source, size_t count)
{
	size_t i;

	i = 0;
	while (i < count)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)source)[i];
		i++;
	}
	return(dest);	

}
