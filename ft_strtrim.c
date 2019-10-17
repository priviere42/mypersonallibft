/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: priviere <priviere@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 12:36:44 by priviere     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/17 11:46:19 by priviere    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int check_beginning(char c, const char *set)
{
	int j;

	j = 0;
	while (set[j] != '\0')
	{
		if (set[j] == c)
			return (1);
		j++;
	}
	return (0);
}

int check_end(char c, const char *set)
{
	int j;

	j = 0;
	while (set[j] != '\0')
	{
		if (set[j] == c)
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int     start;
    int     len;

	start = 0;
	len = ft_strlen(s1);
	while (check_beginning(s1[start], set))
		start++;
	while (check_end(s1[len - 1], set))
		len--;
	if (len - start <= 0)
		return ("");
    return(ft_substr(s1, start, (len - start)));
}
