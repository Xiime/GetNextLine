/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswhitespace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrudel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 13:41:26 by mtrudel           #+#    #+#             */
/*   Updated: 2016/11/12 15:25:51 by mtrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_iswhitespace(int c)
{
	if (c == 44 || c == 32 || c == '\n' || c == '\t' || c == ',')
		return (1);
	return (0);
}
