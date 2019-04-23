#include <string.h>

void *ft_memchr(void* buffer, int ch, size_t count)
{
	size_t i;

	i = 0;
	while(i < count)
	{
		if(((unsigned char *)buffer)[i++] == ch)
			return(&((unsigned char *)buffer)[i]);
		i++;
	}
	return(NULL);
}
