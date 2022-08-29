/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:08:09 by tchappui          #+#    #+#             */
/*   Updated: 2022/03/18 14:20:09 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pusha(t_data *data)
{
	int	*tempa;
	int	i;

	if (data->sizeb > 0)
	{
		tempa = ft_calloc(sizeof (int), data->sizea);
		i = -1;
		while (++i != data->sizea)
			tempa[i] = data->a[i];
		data->a[0] = data->b[0];
		data->sizeb--;
		data->sizea++;
		i = -1;
		if (data->sizea > 1)
		{
			while (++i != data->sizea - 1)
				data->a[i + 1] = tempa[i];
		}
		i = -1;
		while (++i != data->sizeb)
			data->b[i] = data->b[i + 1];
		free(tempa);
		ft_printf("pa\n");
		data->c++;
	}
}

void	ft_pushb(t_data *data)
{
	int	*tempb;
	int	i;

	if (data->sizea > 0)
	{
		tempb = ft_calloc(sizeof (int), data->sizeb);
		i = -1;
		while (++i != data->sizeb)
			tempb[i] = data->b[i];
		data->b[0] = data->a[0];
		data->sizeb++;
		data->sizea--;
		i = -1;
		if (data->sizeb > 1)
		{
			while (++i != data->sizeb - 1)
				data->b[i + 1] = tempb[i];
		}
		i = -1;
		while (++i != data->sizea)
			data->a[i] = data->a[i + 1];
		free(tempb);
		ft_printf("pb\n");
		data->c++;
	}
}
