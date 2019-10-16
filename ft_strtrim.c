/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: priviere <priviere@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 12:36:44 by priviere     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/16 18:51:52 by priviere    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int     start;
    int     len;
	int 	i;
	int		j;

	i = 0;
    if (s1[0] == set[0])
	{
    	while (s1[i] == set[i] && set[i] != '\0')
			i++;
		if (set[i] == '\0')
			start = ft_strlen(set);
		else
			start = 0;
	}
	j = 0;
	while (s1[j])
	{
		if (s1[j] == set[0])
		{
            i = 0;
			while (set[i] == s1[j + i] && set[i] != '\0')
				i++;
			if (s1 [j + i] == '\0' && set[i] == '\0')
				len = ft_strlen(s1) - start - ft_strlen(set);
			else
				len = ft_strlen(s1) - start;
		}
		j++;
	}
    return(ft_substr(s1, start, len));
}
