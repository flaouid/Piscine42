/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaouid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 20:11:11 by flaouid           #+#    #+#             */
/*   Updated: 2019/08/30 10:50:55 by flaouid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_call(char one, char two, char three)
{
	ft_putchar(one);
	ft_putchar(two);
	ft_putchar(three);
	if (one != '7' || two != '8' || three != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	one;
	char	two;
	char	three;

	one = '0' - 1;
	while (++one <= '9')
	{
		two = one;
		while (++two <= '9')
		{
			three = two + 1;
			while (three <= '9')
			{
				ft_print_call(one, two, three);
				three++;
			}
		}
	}
}
