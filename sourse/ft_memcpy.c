#include <string.h>
void *ft_memcpy(void *out, void *in, size_t n)
{
	size_t i;

	i = 0;
	while(i < n)
	{
		((unsigned char *)out)[i] = ((unsigned char *)in)[i];
		i++;
	}
	return(out); 
}
