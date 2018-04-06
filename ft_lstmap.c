t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *))
{
	t_list	*debut;
	t_list	*prev;
	t_list	*next;

	debut = NULL;
	if (lst != NULL)
	{
		debut = ft_lstnew(lst->content, lst->content_size);
		if (debut == NULL)
			return (NULL);
		debut = f(debut);
		prev = debut;
		lst = lst->next;
	}
	while (lst != NULL)
	{
		next = ft_lstnew(lst->content, lst->content_size);
		if (next == NULL)
			return (NULL);
		next = f(next);
		prev->next = next;
		lst = lst->next;
	}
	return (debut);
}
