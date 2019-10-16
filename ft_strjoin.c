/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: priviere <priviere@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 17:47:38 by priviere     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/16 17:43:06 by priviere    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int 	j;
	unsigned int	s1len;
	unsigned int	s2len;
	char 			*str;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	if (!(str = (char *)malloc(sizeof(char)* (s1len + s2len + 1))))
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
