/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: priviere <priviere@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 15:48:27 by priviere     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/16 11:34:02 by priviere    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	char			*dest;
	char			*sourc;

	dest = (char *)dst;
	sourc = (char *)src;
	i = 0;
	if (n)
	{
		while (i < n)
		{
			dest[i] = sourc[i];
			i++;
		}
		if (n > i)
			dest[i] = '\0';
		dst = dest;
	}
	return (dst);
}
