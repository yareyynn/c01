/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakarya <ysakarya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 09:04:55 by ysakarya          #+#    #+#             */
/*   Updated: 2024/01/30 09:13:15 by ysakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmdiv;
	int	tmmod;
	
	int tmdiv = *a / *b;
	int tmmod = *a % *b;
	*a = tmdiv;
	*b = tmmod;
}
