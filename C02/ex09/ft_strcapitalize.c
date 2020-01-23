/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaouid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 14:57:33 by flaouid           #+#    #+#             */
/*   Updated: 2019/09/03 17:43:08 by flaouid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		while (str[i] <= 'z' && str[i] >= 'a')
		{
			if (str[i - 1] <= 'Z' && str[i - 1] >= 'A')
				i++;
			else if (str[i - 1] <= 'z' && str[i - 1] >= 'a')
				i++;
			else if (str[i - 1] <= '9' && str[i - 1] >= '0')
				i++;
			else
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
