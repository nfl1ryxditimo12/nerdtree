/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4-2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vollz2g <vollz2g@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 21:53:45 by vollz2g           #+#    #+#             */
/*   Updated: 2021/02/02 21:57:29 by vollz2g          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int a;

	a = 2147483647;
	printf("a : %d\n", a);
	a++;
	printf("a : %d\n", a);
	return (0);
}
