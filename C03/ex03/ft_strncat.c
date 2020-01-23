/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaouid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 10:51:35 by flaouid           #+#    #+#             */
/*   Updated: 2019/09/05 18:24:12 by flaouid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int base;
	int add;

	base = 0;
	while (dest[base])
		base++;
	add = 0;
	while (src[add] && nb > 0)
	{
		dest[base + add] = src[add];
		add++;
		nb--;
	}
	dest[base + add] = '\0';
	return (dest);
}
