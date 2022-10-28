/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:19:14 by ohaimad           #+#    #+#             */
/*   Updated: 2022/10/15 22:12:53 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_isalpha(int c)
{
	if ((97 <= c && c <= 122) || (65 <= c && c <= 90))
		return (1);
	else
		return (0);
}

// int main()
// {
// 	int c;
// 	c = 91;
// 	printf("%d\n", ft_isalpha(c));
// 	printf("%d", isalpha(c));
// }	