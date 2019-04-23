# include  <stdlib.h>

void bzero(void* b, size_t len)
{
	size_t  i;
	
	i = 0;
	while(i < len)
		((unsigned char*)b)[i++] = '0';
}
