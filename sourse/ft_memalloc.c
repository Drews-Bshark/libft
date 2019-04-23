#include <stdlib.h>
void* ft_memalloc(size_t size)
{
	void* new;
	size_t i;

	i = 0; 
	new = NULL;
	if(!(new = (size_t*) malloc(sizeof(size))))
		return(NULL);
	while(i < size)
	{
		((unsigned char*)new)[i++] = '0';
	}
	return(new);	

}	
