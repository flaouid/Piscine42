/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaouid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 17:08:27 by flaouid           #+#    #+#             */
/*   Updated: 2019/09/13 18:13:01 by flaouid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		onizuka(char **strs, char *sep, int size)
{
	int i;
	int j;
	int len;

	j = 0;
	len = 0;
	while (size > 0)
	{
		i = 0;
		while (strs[j][i++])
		{
			len++;
		}
		i = 0;
		while (sep[i++] != '\0')
		{
			if (size > 1)
				len++;
		}
		j++;
		size--;
	}
	return (len + 1);
}

void	oddfrr(int size, char **strs, char *sep, char *dest)
{
	int i;
	int j;
	int k;

	k = 0;
	j = 0;
	while (size > 0)
	{
		i = 0;
		while (strs[j][i])
		{
			dest[k++] = strs[j][i++];
		}
		i = 0;
		if (size > 1)
		{
			while (sep[i] != '\0')
				dest[k++] = sep[i++];
		}
		size--;
		j++;
	}
	dest[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char *dest;

	dest = (char *)malloc((sizeof(char)) * onizuka(strs, sep, size));
	if (!dest)
		return (NULL);
	oddfrr(size, strs, sep, dest);
	return (dest);
}
