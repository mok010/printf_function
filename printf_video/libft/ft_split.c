/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emok <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:12:03 by emok              #+#    #+#             */
/*   Updated: 2023/10/09 18:12:08 by emok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static size_t	ft_count_word(char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (s[0] == '\0')
		return (0);
	while (s[i] != 0 && (s[i] == c))
		i++;
	while (s[i] != 0)
	{
		if (s[i] == c)
		{
			count++;
			while (s[i] == c)
				i++;
			continue ;
		}
		i++;
	}
	if (s[i - 1] != c)
		count++;
	return (count);
}

static void	ft_make_str(char **str, size_t *count, char c)
{
	int	i;

	i = 0;
	(*str) += (*count);
	*count = 0;
	while ((**str) == c && (**str) != '\0')
		(*str)++;
	while ((*str)[i])
	{
		if ((*str)[i] == c)
			return ;
		(*count) += 1;
		i++;
	}
}

static int	wantmoreline(char **tmp, size_t i)
{
	if (tmp[i] == 0)
	{
		ft_free(tmp);
		return (0);
	}
	else
		return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**tmp;
	size_t	count;
	char	*tmp_s;
	size_t	i;

	if (s == 0)
		return (NULL);
	i = -1;
	tmp_s = (char *)s;
	count = 0;
	tmp = (char **)malloc(sizeof(char *) * (ft_count_word((char *)s, c) + 1));
	if (tmp == 0)
		return (NULL);
	while (++i < ft_count_word((char *)s, c))
	{
		ft_make_str(&tmp_s, &count, c);
		tmp[i] = (char *)malloc(sizeof(char) * (count + 1));
		if (wantmoreline(tmp, i) == 0)
			return (0);
		ft_strlcpy(tmp[i], tmp_s, (count) + 1);
	}
	tmp[i] = 0;
	return (tmp);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	i = 0;
// 	char **tmp = ft_split("^^^1^^2a,^^^^3^^^^--h^^^^", '^');
// 	while (tmp[i] != 0)
// 	{
// 		printf("%s", tmp[i++]);
// 		printf("\n");
// 	}
// 	return (0);
// }