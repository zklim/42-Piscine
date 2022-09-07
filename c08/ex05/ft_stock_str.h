/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhlim <zhlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 12:18:10 by zhlim             #+#    #+#             */
/*   Updated: 2022/09/07 13:01:40 by zhlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

# include <unistd.h>
# include <stdlib.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
void				ft_show_tab(struct s_stock_str *par);

typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}	t_stock_str;

#endif
