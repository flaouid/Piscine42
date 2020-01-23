/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaouid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 17:02:40 by flaouid           #+#    #+#             */
/*   Updated: 2019/09/11 17:19:03 by flaouid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	while (nb % i != 0 && i < nb)
	{
		if (i < nb)
			i++;
	}
	if (i == nb)
		return (1);
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	nb++;
	while (1)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
}
