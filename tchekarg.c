/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tchekarg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:55:46 by tchappui          #+#    #+#             */
/*   Updated: 2022/03/18 14:20:17 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_chekc(char **argv, int argc, int i)
{
	int	j;

	while (++i != argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] == '-')
			{
				if (argv[i][j + 1] > '9' || argv[i][j + 1] < '0')
				{
					ft_printf("ERROR\n");
					return (1);
				}
			}
			else if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				ft_printf("ERROR\n");
				return (1);
			}
			j++;
		}
	}
	return (0);
}

int	ft_cheknum(t_data *data)
{
	int	i;
	int	j;

	j = 1;
	while (j != data->sizea)
	{
		i = 0;
		while (i < j)
		{
			if (data->a[j] == data->a[i])
				return (1);
			i++;
		}
		j++;
	}
	return (0);
}
