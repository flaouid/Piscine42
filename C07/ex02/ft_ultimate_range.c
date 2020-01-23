/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaouid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 12:55:43 by flaouid           #+#    #+#             */
/*   Updated: 2019/09/12 17:05:31 by flaouid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *tab;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	tab = (int*)malloc(sizeof(int) * ((max - min)));
	while (min <= max - 1)
	{
		tab[i++] = min++;
	}
	if (min != max)
	{
		*range = NULL;
		return (-1);
	}
	*range = tab;
	return (i);
}
