/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: priviere <priviere@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 19:00:15 by priviere     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/23 13:29:54 by priviere    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	char			*str;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == c && i < n)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
