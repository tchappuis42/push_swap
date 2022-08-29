/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:20:52 by tchappui          #+#    #+#             */
/*   Updated: 2022/03/18 14:20:07 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./printf/ft_printf.h"
# include "./printf/libft/libft.h"

typedef struct s_data
{
	int	*a;
	int	*b;
	int	*t;
	int	sizeb;
	int	sizea;
	int	c;
}		t_data;

//fonction de trie
void	ft_pusha(t_data *data);
void	ft_pushb(t_data *data);
void	ft_swapa(t_data *data, int k);
void	ft_swapb(t_data *data, int k);
void	ft_swapab(t_data *data);
void	ft_rotatea(t_data *data, int k);
void	ft_rotateb(t_data *data, int k);
void	ft_rotateab(t_data *data);
void	ft_reverse_rotatea(t_data *data, int k);
void	ft_reverse_rotateb(t_data *data, int k);
void	reverse_rotateab(t_data *data);
int		ft_ordre(t_data *data);

//fonction de gestion d'erreur
int		ft_cheknum(t_data *data);
int		ft_chekc(char **argv, int argc, int i);

//fonction petit algo
void	ft_algo5(t_data *data);
void	ft_algo3(t_data *data);

//fonction algo radix
void	ft_algo100(t_data *data);
void	ft_firsttri(t_data *data);

//fonction free
void	ft_freet(char **t);
void	ft_free(t_data *data);

#endif