/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:18:29 by tchappui          #+#    #+#             */
/*   Updated: 2022/03/16 14:09:13 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_ordre(t_data *data)
{
	int	i;

	i = 0;
	while (i != data->sizea - 1)
	{
		if (data->a[i] > data->a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	ft_firsttri(t_data *data)
{
	long int	nb;
	int			i;
	int			j;
	int			s;

	nb = -2147483649;
	i = 0;
	data->t = ft_calloc(sizeof (int), data->sizea);
	while (i != data->sizea)
	{
		s = 0;
		j = 0;
		while (j != data->sizea)
		{
			if (data->a[s] <= nb)
				s++;
			if (data->a[s] > data->a[j] && data->a[j] > nb)
				s = j;
			j++;
		}
		nb = data->a[s];
		data->t[s] = i;
		i++;
	}
}

void	ft_algo100(t_data *data)
{
	int	i;
	int	j;
	int	len;

	len = data->sizea;
	i = 0;
	ft_firsttri(data);
	while (ft_ordre(data) == 0)
	{
		j = 0;
		while (j != len)
		{
			if ((data->t[j] >> i) & 1)
				ft_rotatea(data, 1);
			else
				ft_pushb(data);
			j++;
		}
		while (data->sizeb != 0)
			ft_pusha(data);
		free(data->t);
		ft_firsttri(data);
		i++;
	}
}
