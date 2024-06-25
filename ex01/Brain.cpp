/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 16:21:13 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/25 13:21:06 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

// Constructors
Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}
Brain::Brain(const Brain &src)
{
	int					i;
	const std::string	(&arr)[BRAIN_DFT_IDEAS_QTY] = src.getIdeas();

	i = 0;
	while (i < BRAIN_DFT_IDEAS_QTY)
	{
		ideas[i] = arr[i];
		i++;
	}
	std::cout << "Brain copy constructor called" << std::endl;
}

// Destructors
Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

// Operators
Brain & Brain::operator=(const Brain &assign)
{
	int					i;
	const std::string	(&arr)[BRAIN_DFT_IDEAS_QTY] = assign.getIdeas();

	i = 0;
	while (i < BRAIN_DFT_IDEAS_QTY)
	{
		ideas[i] = arr[i];
		i++;
	}
	return *this;
}

// Getters / Setters
int					Brain::getQtyOfIdeas( void ) const
{
	return BRAIN_DFT_IDEAS_QTY;
}

const std::string	(&Brain::getIdeas( void ) const)[BRAIN_DFT_IDEAS_QTY]
{
	return	ideas;
}
void				Brain::setIdeas(std::string (&arr)[BRAIN_DFT_IDEAS_QTY])
{
	int	i;

	i = 0;
	while (i < BRAIN_DFT_IDEAS_QTY)
	{
		ideas[i] = arr[i];
		i++;
	}
}
