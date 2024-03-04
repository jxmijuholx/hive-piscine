/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamijuhola <jjuhola@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 21:42:00 by jamijuhola        #+#    #+#             */
/*   Updated: 2024/02/20 21:42:05 by jamijuhola       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_is_negative(int  n)
{
    char    positive;
    char    negative;

    positive = 'P';
    negative = 'N';
    if (n < 0)
    {
        write(1, & negative, 1);
    }else
    {
        write(1, &positive, 1);
    }
}