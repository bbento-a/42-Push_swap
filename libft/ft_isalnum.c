/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:17:31 by bbento-a          #+#    #+#             */
/*   Updated: 2023/10/09 15:36:39 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int n)
{
	if (n > 47 && n < 58)
		return (1);
	else if ((n > 64 && n < 91) || (n > 96 && n < 123))
		return (1);
	else
		return (0);
}