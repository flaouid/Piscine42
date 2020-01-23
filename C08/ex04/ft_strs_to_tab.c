/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaouid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 11:29:45 by flaouid           #+#    #+#             */
/*   Updated: 2019/09/17 17:33:21 by flaouid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	int		i;
	char	*par;

	par = (char*)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!par)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		par[i] = src[i];
		i++;
	}
	par[i] = '\0';
	return (par);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*par;

	par = (t_stock_str*)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!par)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		par[i].size = ft_strlen(av[i]);
		par[i].str = av[i];
		par[i].copy = ft_strdup(av[i]);
		i++;
	}
	par[i].str = 0;
	return (par);
}
