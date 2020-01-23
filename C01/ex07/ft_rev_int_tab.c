/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaouid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 22:29:58 by flaouid           #+#    #+#             */
/*   Updated: 2019/09/19 12:42:02 by flaouid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int tmp;
	int i;
	int samere;

	i = 0;
	samere = size - 1;
	while (i < samere)
	{
		tmp = tab[i];
		tab[i] = tab[samere];
		tab[samere] = tmp;
		i++;
		samere--;
	}
}
