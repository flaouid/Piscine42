/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rowright.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaouid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 14:24:35 by flaouid           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2019/09/08 23:40:40 by flaouid          ###   ########.fr       */
=======
/*   Updated: 2019/09/08 21:27:32 by flaouid          ###   ########.fr       */
>>>>>>> b42d049baeaf9ea6e01c7f0b14e68bee88cc9787
/*                                                                            */
/* ************************************************************************** */

int	*ft_rowright(int *a)
{
<<<<<<< HEAD
	int box;
	int rowright[6];

	box = 6;
	*rowright = 0;
	while (box <= 6)
	{
		rowright[box] = a[box];
		box++;
=======
	int case;
	int rowright[6];

	case = 6;
	*rowright = 0;
	while (case <= 6)
	{
		rowright[case] = a[case];
		case++;
>>>>>>> b42d049baeaf9ea6e01c7f0b14e68bee88cc9787
	}
	return (rowright);
}
