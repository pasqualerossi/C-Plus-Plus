/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:48:13 by prossi            #+#    #+#             */
/*   Updated: 2022/08/01 11:13:32 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP_
# define DATA_HPP_

# include <cstdint>
# include <iostream>
# include <stdint.h>

struct Data 
{
	int n;
};

uintptr_t serialize(Data *ptr);

Data* deserialize(uintptr_t raw);

#endif