/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamijuhola <jjuhola@tudent.hive.fi>         +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 10:00:00 by jamijuhola        #+#    #+#             */
/*   Updated: 2021/09/01 10:00:00 by jamijuhola       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_str_is_alpha(char *str)
{
	unsigned int    i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			return (0);
		++i;
	}
	return (1);
}
/*
#include <stdio.h>

int	ft_str_is_alpha(char *str);

int main() {
    char alpha_string[] = "Imasurgeon";
    char false_string[] = "Iamnotacatme0w";

    printf("%s: %d\n", alpha_string, ft_str_is_alpha(alpha_string));
    printf("%s: %d\n", false_string, ft_str_is_alpha(false_string));

    return 0;
}
*/