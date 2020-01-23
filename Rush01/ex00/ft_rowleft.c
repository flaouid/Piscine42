/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rowleft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaouid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 13:57:30 by flaouid           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2019/09/08 23:41:14 by flaouid          ###   ########.fr       */
=======
/*   Updated: 2019/09/08 21:26:38 by flaouid          ###   ########.fr       */
>>>>>>> b42d049baeaf9ea6e01c7f0b14e68bee88cc9787
/*                                                                            */
/* ************************************************************************** */

int	*ft_rowleft(int *a)
{
<<<<<<< HEAD
	int box;
	int rowleft[6];

	box = 6;
	*rowleft = 0;
	while (box <= 6)
	{
		rowleft[box] = a[box];
		box++;
=======
	int case;
	int rowleft[6];

	case = 6;
	*rowleft = 0;
	while (case <= 6)
	{
		rowleft[case] = a[case];
		case++;
>>>>>>> b42d049baeaf9ea6e01c7f0b14e68bee88cc9787
	}
	return (rowleft);
}
