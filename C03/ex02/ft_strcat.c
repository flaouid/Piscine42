/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaouid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 18:25:41 by flaouid           #+#    #+#             */
/*   Updated: 2019/09/04 18:51:48 by flaouid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int base;
	int add;

	base = 0;
	while (dest[base])
		base++;
	add = 0;
	while (src[add])
	{
		dest[base + add] = src[add];
		add++;
	}
	dest[base + add] = '\0';
	return (dest);
}
