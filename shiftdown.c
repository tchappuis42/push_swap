/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shiftdown.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 19:33:10 by tchappui          #+#    #+#             */
/*   Updated: 2022/03/14 14:27:28 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotatea(t_data *data, int k)
{
	int	*t;
	int	i;

	i = -1;
	t = ft_calloc(sizeof (int), data->sizea);
	while (++i != data->sizea)
		t[i] = data->a[i];
	data->a[0] = data->a[data->sizea - 1];
	i = -1;
	while (++i != data->sizea - 1)
		data->a[i + 1] = t[i];
	free(t);
	if (k == 1)
		ft_printf("rra\n");
	data->c++;
}

void	ft_reverse_rotateb(t_data *data, int k)
{
	int	*t;
	int	i;

	i = -1;
	t = ft_calloc(sizeof (int), data->sizeb - 1);
	while (++i != data->sizeb)
		t[i] = data->b[i];
	data->b[0] = data->b[data->sizeb];
	i = -1;
	while (++i != data->sizeb - 1)
		data->b[i + 1] = t[i];
	free(t);
	if (k == 1)
		ft_printf("rrb\n");
	data->c++;
}

void	reverse_rotateab(t_data *data)
{
	ft_reverse_rotatea(data, 0);
	ft_reverse_rotateb(data, 0);
	ft_printf("rrr\n");
}
