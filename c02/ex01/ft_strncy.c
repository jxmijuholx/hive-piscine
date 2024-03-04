/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamijuhola <jjuhola@student.hive.fi>         +#+  +:+        +#+     */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 10:00:00 by YourName          #+#    #+#             */
/*   Updated: 2021/09/01 10:30:00 by YourName         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int    i;

    i = 0;
    while (src[i] && i <= n)
    {
        dest[i] = src[i];
        i++;
    }
    while (i <= n)
    {
        dest[i] = '\0';
        i++;
    return (dest);
}
/*
#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
    char src[] = "Hello, world!";
    char dest[50];
    ft_strncpy(dest, src, 5);

    printf("Copied string: %s\n", dest);

    return 0;
}
*/
