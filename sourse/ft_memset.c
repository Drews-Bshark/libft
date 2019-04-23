#include <string.h>
void *ft_memset(void *destination, int c, size_t n)
{
	//int  i;
	//int count;
	size_t i;
	//count = n/sizeof(destination);
	i = 0;
	while(i < n)

		((unsigned char *)destination)[i++] = c;
	return(destination);
}

