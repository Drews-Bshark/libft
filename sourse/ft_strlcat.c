#include <string.h>

int ft_strlen(const  char *str)
{
	int i;

	i = 0;
       while(str[i])
		i++;
	return(i);
}
size_t ft_strlcat (char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t dst_ln;
	size_t src_ln;
	
	i = 0;
	j = 0;
	dst_ln = ft_strlen(dst);
	src_ln = ft_strlen(src);
	if(size <= dst_ln)
		return(src_ln + size);
	while(i < size - 1 && src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return(dst_ln + size);
}
