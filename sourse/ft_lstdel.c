#include "libft.h"
#include <stdlib.h>
void ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *back_alst;
	t_list *next_alst;
	if(alst && del)
	{
		back_alst = *alst;
		while(back_alst)
		{
			next_alst = back_alst->next;
			del(next_alst ->content, next_alst -> content_size);
			free(back_alst);
			back_alst = next_alst;
		}
		*alst = NULL;
	}
}