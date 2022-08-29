/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   petitalgo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:23:23 by tchappui          #+#    #+#             */
/*   Updated: 2022/03/18 14:19:04 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_high(t_data *data)
{
	int	i;
	int	s;

	i = 0;
	s = 0;
	while (i != data->sizea)
	{
		if (data->a[s] < data->a[i])
			s = i;
		i++;
	}
	if (s < 3)
	{
		while (s-- != 0)
			ft_rotatea(data, 1);
	}
	else
	{
		while (s++ < data->sizea)
			ft_reverse_rotatea(data, 1);
	}
	ft_pushb(data);
}

void	ft_lowes(t_data *data)
{
	int	i;
	int	s;

	i = 0;
	s = 0;
	while (i != data->sizea)
	{
		if (data->a[s] > data->a[i])
			s = i;
		i++;
	}
	if (s < 3)
	{
		while (s-- != 0)
			ft_rotatea(data, 1);
	}
	else
	{
		while (s++ < data->sizea)
			ft_reverse_rotatea(data, 1);
	}
	ft_pushb(data);
}

void	ft_algo3(t_data *data)
{
	if (data->sizea == 3)
	{
		if (data->a[0] > data->a[1])
			ft_swapa(data, 1);
		if (data->a[1] > data->a[2])
			ft_reverse_rotatea(data, 1);
		if (data->a[0] > data->a[1])
			ft_swapa(data, 1);
	}
	else if (data->sizea == 2)
	{
		if (data->a[0] > data->a[1])
			ft_swapa(data, 1);
	}
}

void	ft_algo5(t_data *data)
{
	if (ft_ordre(data) == 0)
	{
		if (data->sizea == 5)
		{
			ft_lowes(data);
			ft_high(data);
			ft_algo3(data);
			ft_pusha(data);
			ft_rotatea(data, 1);
			ft_pusha(data);
		}
		else
		{
			ft_lowes(data);
			ft_algo3(data);
			ft_pusha(data);
		}
	}
}
