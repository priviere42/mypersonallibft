/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: priviere <priviere@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 14:30:14 by priviere     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/16 16:36:44 by priviere    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	if (!*needle)
		return ((char *)&haystack[0]);
	j = 0;
	i = 0;
	while (haystack[j] != '\0')
	{
		if (haystack[j] == needle[0])
		{
			k = j;
			while (needle[i] == haystack[k + i]
			&& needle[i] != '\0' && k + i < len)
				i++;
			if (needle[i] == '\0')
				return ((char *)&haystack[k]);
		}
		j++;
	}
	return (0);
}
