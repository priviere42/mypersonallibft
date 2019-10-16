/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: priviere <priviere@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 18:14:31 by priviere     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/16 17:19:35 by priviere    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;
	char			*dest;
	char			*sourc;
	char			swap[len];

	dest = (char *)dst;
	sourc = (char *)src;
	i = 0;
	while (i < len)
	{
		swap[i] = sourc[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		dest[i] = swap[i];
		i++;
	}
	dst = dest;
	return (dst);
}
