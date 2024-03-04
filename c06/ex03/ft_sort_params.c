/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamijuhola <jjuhola@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:22:05 by jamijuhola        #+#    #+#             */
/*   Updated: 2024/02/23 14:49:55 by jamijuhola       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char	*str)
{
	int     len;

	len = 0;
	while(str[len] != '\0')
	{
		len++;
	}
	return (len);
}

int     ft_strcmp (char *s1, char *s2)
{
	int     i;

	i = 0;
	while ( *s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}