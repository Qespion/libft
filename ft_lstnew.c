# include "libft.h"

t_list			*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;

	if (!(list = malloc(sizeof(t_list))))
		return (NULL);
	if (list)
	{
		list->data = ft_memcpy(list->data, content, content_size);
		list->size = content_size;
		list->next = NULL;
	}
	return (list);
}
