/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaouid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 12:01:19 by flaouid           #+#    #+#             */
/*   Updated: 2019/09/13 18:09:35 by flaouid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *dest;

	i = 0;
	if (min >= max)
		return (NULL);
	dest = (int *)malloc(sizeof(int) * ((max - min)));
	if (!dest)
		return (NULL);
	while (min < max)
	{
		dest[i] = min;
		i++;
		min++;
	}
	if (min != max)
		return (0);
	return (dest);
}
