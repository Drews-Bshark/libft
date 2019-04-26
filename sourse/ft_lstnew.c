#include "libft.h"
#include <stdlib.h>

t_list* ft_lstnew(void const *content, size_t content_size)
{
	t_list* result;
	
	if(!(result = (t_list *)malloc(sizeof(result))))
		return (0);
	if(!(content))
	{
		result -> content = NULL;
		result -> content_size = 0;
	}
	else 
	{	if(!(result -> content = (void *)malloc(content_size)))
		{
			free(result);
			return(NULL);
		}
		ft_memcpy(result->content, content, content_size);
		result -> content_size = content_size;
		result -> next = NULL;
	}	
	return result;
}
