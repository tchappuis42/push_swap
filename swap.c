/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:54:55 by tchappui          #+#    #+#             */
/*   Updated: 2022/03/14 13:21:04 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swapa(t_data *data, int k)
{
	int	t;

	t = data->a[0];
	data->a[0] = data->a[1];
	data->a[1] = t;
	if (k == 1)
		ft_printf("sa\n");
	data->c++;
}

void	ft_swapb(t_data *data, int k)
{
	int	t;

	t = data->b[0];
	data->b[0] = data->b[1];
	data->b[1] = t;
	if (k == 1)
		ft_printf("sb\n");
	data->c++;
}

void	ft_swapab(t_data *data)
{
	ft_swapa(data, 0);
	ft_swapb(data, 0);
	ft_printf("ss\n");
}
