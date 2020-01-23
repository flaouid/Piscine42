/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_coldown.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaouid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 13:44:16 by flaouid           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2019/09/08 23:39:46 by flaouid          ###   ########.fr       */
=======
/*   Updated: 2019/09/08 21:28:14 by flaouid          ###   ########.fr       */
>>>>>>> b42d049baeaf9ea6e01c7f0b14e68bee88cc9787
/*                                                                            */
/* ************************************************************************** */

int	*ft_coldown(int *a)
{
<<<<<<< HEAD
	int box;
	int coldown[6];

	box = 6;
	*coldown[box] = 0;
	while (box < 7)
	{
		coldown[box] = a[box];
		box++;
=======
	int case;
	int coldown[6];

	case = 6;
	*coldown[case] = 0;
	while (case < 7)
	{
		coldown[case] = a[case];
		case++;
>>>>>>> b42d049baeaf9ea6e01c7f0b14e68bee88cc9787
	}
	return (coldown);
}
