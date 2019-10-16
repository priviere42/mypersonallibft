/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_substr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: priviere <priviere@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 17:16:40 by priviere     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/16 18:44:13 by priviere    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char 			*str;
	unsigned int 	i;

	i = 0;
	if (!(str = (char *)malloc(sizeof(char)*(len + 1))))
		return (NULL);
	if (start <= ft_strlen(s))
	{
		i = 0;
		while (s[start] && i < len)
		{
			str[i] = s[start];
			i++;
			start++;
		}
	}
	str[i] = '\0';
	return (str);
}
