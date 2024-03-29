/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbento-a <bbento-a@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:32:41 by bbento-a          #+#    #+#             */
/*   Updated: 2023/11/16 13:38:16 by bbento-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			*s1;
	char			*s2;

	if (!src && !dest)
		return (dest);
	s1 = (char *)src;
	s2 = (char *)dest;
	if (s1 < s2)
		while (n--)
			s2[n] = s1[n];
	else
		ft_memcpy(s2, s1, n);
	return (dest);
}

/*
int	main (void)
{
	//char	src[] = "Hello";
	char	dest[] = "world";
	//printf("%s\n", (char *)memmove((void *)(dest + 2), (void *)(dest + 1), 4));
	printf("%s\n", (char *)ft_memmove((void *)(dest + 2), (void *)(dest + 1), 4));
	return (0);
}
*/
