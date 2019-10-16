/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_calloc.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: priviere <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 12:38:49 by priviere     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/11 09:13:18 by priviere    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char			*ptr;
	unsigned int	i;

	if (!(ptr = (char *)malloc(count * size)))
		return (NULL);
	i = 0;
	while (i != count)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
