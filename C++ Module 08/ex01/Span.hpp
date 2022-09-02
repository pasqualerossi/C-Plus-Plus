/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:10:02 by prossi            #+#    #+#             */
/*   Updated: 2022/08/01 15:09:24 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <exception>
# include <vector>
# include <cstddef>
# include <exception>
# include <algorithm>

class Span 
{
	private:

		typedef std::vector<int>::iterator IT;
	
	public:

		Span(unsigned int n);
		Span(const Span& other);
		~Span();

		Span& operator=(const Span& other);

		void addNumber(int n);
		void addRange(IT begin, IT end);

		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;

		std::size_t size() const;
	
	private:

		Span();

		std::vector<int> _vector;
		std::size_t _size;
	
	public:

		class SpanIsFullException : public std::exception 
		{
			public: virtual const char* what() const throw();
		};

		class SizeTooSmallException : public std::exception 
		{
			public: virtual const char* what() const throw();
		};
};

#endif