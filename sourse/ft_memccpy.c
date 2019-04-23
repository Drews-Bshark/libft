#include <string.h>

void *ft_memccpy(void *out, void *in,int c, size_t n)
{
	size_t i;
	int flag;

	flag = 0;
	i = 0;
	while(i < n)
	{
		((unsigned char *)out)[i] = ((unsigned char *)in)[i];
		if(((unsigned char*)out)[i] == c)	
		{
			flag = 1;
			break;
		}
		i++;
	}
	if(flag == 1)
		return(out + i + 1);
	return(NULL);
}
